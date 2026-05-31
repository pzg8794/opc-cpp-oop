
#include <assert.h>

// SDL_GL_Functions: Copied from gpwiki.org.
//#include <cstdlib> // For some useful functions such as atexit :)
#include "SDL.h" // main SDL header
#include "SDL_opengl.h"
#include "SDL_mixer.h"
//#include "SDL_ttf.h"
#include <iostream>
#include <stdlib.h>
#undef main

#include <stdio.h>
#include <math.h>

//#include "ode/ode.h"
//#include "gl/glut.h"

#include "imageloader.h"

#include <sdl_syswm.h>
void SetWindowPosition(int sX, int sY)
{
	RECT sRect;
	static SDL_SysWMinfo sInfo;
	SDL_VERSION(&sInfo.version);
	SDL_GetWMInfo(&sInfo);	
	GetWindowRect(sInfo.window, &sRect);
	MoveWindow(sInfo.window, sX, sY, sRect.right, sRect.top, true);
}






//Makes the image into a texture, and returns the id of the texture
GLuint loadTexture2(Image* image) {
	GLuint textureId;
	glGenTextures(1, &textureId); //Make room for our texture
	glBindTexture(GL_TEXTURE_2D, textureId); //Tell OpenGL which texture to edit
	//Map the image to the texture
	glTexImage2D(GL_TEXTURE_2D,                //Always GL_TEXTURE_2D
				 0,                            //0 for now
				 GL_RGB,                       //Format OpenGL uses for image
				 image->width, image->height,  //Width and height
				 0,                            //The border of the image
				 GL_RGB, //GL_RGB, because pixels are stored in RGB format
				 GL_UNSIGNED_BYTE, //GL_UNSIGNED_BYTE, because pixels are stored
				                   //as unsigned numbers
				 image->pixels);               //The actual pixel data
	return textureId; //Returns the id of the texture
}

GLuint g_textureId; //The id of the texture


/*

//ode vars

#define MASS 0.2

#define MU 0.5      // the global mu to use
#define GRAVITY 0.5   // the global gravity to use

dWorldID world;
dSpaceID space;
dBodyID body;
dJointGroupID contactgroup;
dGeomID ground;
dGeomID box;




// this is called by dSpaceCollide when two objects in space are
// potentially colliding.
static void nearCallback (void *data, dGeomID o1, dGeomID o2)
{
  int i;

  // only collide things with the ground
  int g1 = (o1 == ground);
  int g2 = (o2 == ground);
  if (!(g1 ^ g2)) return;

  dBodyID b1 = dGeomGetBody(o1);
  dBodyID b2 = dGeomGetBody(o2);

  dContact contact[3];      // up to 3 contacts per box
  for (i=0; i<3; i++) {
    contact[i].surface.mode = dContactSoftCFM | dContactApprox1;
    contact[i].surface.mu = MU;
    contact[i].surface.soft_cfm = 0.01;
  }
  if (int numc = dCollide (o1,o2,3,&contact[0].geom,sizeof(dContact))) {
    for (i=0; i<numc; i++) {
      dJointID c = dJointCreateContact (world,contactgroup,contact+i);
      dJointAttach (c,b1,b2);
    }
  }
}

*/






static const SDL_Color WHITE = {255,255,255};
static const SDL_Color BLUE = {0,0,255}; 

static GLboolean should_rotate = GL_TRUE;


#include "vec3f.h"
#include "text3d.h"
#include "gameball.h"
#include "paddle.h"


GameBall g_ball = GameBall(1.0f, Vec3f(0.0f, 0.0f, 0), Vec3f(0.05f, 0.02f, 0));
Paddle g_p1Paddle = Paddle(0.15f, 2.0f, 0.5f, Vec3f(-9.0f, 0.0f, 0));
Paddle g_p2Paddle = Paddle(0.15f, 2.0f, 0.5f, Vec3f(9.0f, 0.0f, 0));

unsigned int g_p1Score = 0;
unsigned int g_p2Score = 0;

//TTF_Font * g_font;
SDL_Surface * screen;


//SDL audio
Mix_Chunk *sound = NULL;
int channel;


using namespace std;


void update(void);

//The four strings that are drawn
string g_scoreTextPlayer1 = "Player 1 score: ";
string g_scoreTextPlayer2 = "Player 2 score: ";


//Computes a scaling value so that the strings
float computeScale(const char* strs[4]) {
	float maxWidth = 0;
	for(int i = 0; i < 4; i++) {
		float width = t3dDrawWidth(strs[i]);
		if (width > maxWidth) {
			maxWidth = width;
		}
	}
	
	return 2.6f / maxWidth;
}




static void quit_tutorial( int code )
{
    /*
     * Quit SDL so we can release the fullscreen
     * mode and restore the previous video settings, etc.
     */


	t3dCleanup();
//	Mix_FreeChunk(sound);
//	Mix_CloseAudio();
    SDL_Quit( );

/*
	//clean up ODE
	dJointGroupDestroy (contactgroup);
	dSpaceDestroy (space);
	dWorldDestroy (world);
	dCloseODE();
*/


    /* Exit program. */
    exit( code );
}


static void handle_key_down( SDL_keysym* keysym )
{

	switch( keysym->sym ) {
    case SDLK_ESCAPE:
        quit_tutorial( 0 );
        break;
    case SDLK_SPACE:
        should_rotate = !should_rotate;
        break;

    case SDLK_LEFT:
		g_p2Paddle.newLocation(g_p2Paddle.getLocation() + Vec3f(0,0.3f,0));
		g_p2Paddle.setVelocity(Vec3f(0,0.1f,0));

		break;
    case SDLK_RIGHT:
		g_p2Paddle.newLocation(g_p2Paddle.getLocation() - Vec3f(0,0.3f,0));
		g_p2Paddle.setVelocity(Vec3f(0,-0.1f,0));


		break;
	case SDLK_UP:
		g_p1Paddle.newLocation(g_p1Paddle.getLocation() + Vec3f(0,0.3f,0));
		g_p1Paddle.setVelocity(Vec3f(0,0.1f,0));

		break;
	case SDLK_DOWN:
		g_p1Paddle.newLocation(g_p1Paddle.getLocation() - Vec3f(0,0.3f,0));
		g_p1Paddle.setVelocity(Vec3f(0,-0.1f,0));

		break;
    default:
        break;
    }

}


static void process_events( void )
{
    /* Our SDL event placeholder. */
    SDL_Event event;

    /* Grab all the events off the queue. */
    while( SDL_PollEvent( &event ) ) {
        switch( event.type ) {
        case SDL_KEYDOWN:
            /* Handle key presses. */
            handle_key_down( &event.key.keysym );
            break;


        case SDL_KEYUP:
			g_p1Paddle.setVelocity(Vec3f(0,0,0));
			g_p2Paddle.setVelocity(Vec3f(0,0,0));
			break;


        case SDL_QUIT:
            /* Handle quit requests (like Ctrl-c). */
            quit_tutorial( 0 );
            break;

        default:
            break;
        }
    } /* while */
}


static void draw_screen( void )
{	
	char buffer [33];


	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	glTranslatef(0.0f, 0.0f, -20.0f);

//	glTranslatef(0.5f, -0.3f, -1.8f);
	glRotatef(-40, 1, 0, 0);
//	glRotatef(0, 0, 1, 0);


	
	GLfloat ambientLight[] = {0.3f, 0.3f, 0.3f, 1.0f};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientLight);
	
	GLfloat lightColor[] = {0.7f, 0.7f, 0.7f, 1.0f};
	GLfloat lightPos[] = {-2 * 1, 1, 4 * 1, 1.0f};
	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor);
	glLightfv(GL_LIGHT0, GL_POSITION, lightPos);
	


	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, g_textureId);

	//Bottom
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);
	//glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);
//	glColor3f(1.0f, 0.2f, 0.2f);
	glColor3f(1.0f, 1.0f, 1.0f); 
	glBegin(GL_QUADS);

	glColor3f(1.0f, 1.0f, 1.0f); 
	glNormal3f(0.0, 1.0f, 0.0f);
	glTexCoord2f(0.0f, 0.0f);
	glVertex3f(-9, -7, -1);
	glTexCoord2f(1.0f, 0.0f);
	glVertex3f(9, -7, -1);
	glTexCoord2f(1.0f, 1.0f);
	glVertex3f(9, 15, -1);
	glTexCoord2f(0.0f, 1.0f);
	glVertex3f(-9, 15, -1);
	
	glEnd();
	glColor3f(1.0f, 0.2f, 0.2f);


/*
	//draw bottom plane	
	glEnable(GL_TEXTURE_2D);
	glBindTexture(GL_TEXTURE_2D, g_textureId);
	glBegin(GL_QUADS);							
	glColor3f(1.0f, 0.0f, 1.0f); 
	glVertex3f(-9, -7, -1);
	glVertex3f(9, -7, -1);
	glVertex3f(9, 15, -1);
	glVertex3f(-9, 15, -1);
	glEnd();
	glColor3f(1.0f, 1.0f, 1.0f); 


*/

	glPushMatrix();

	//The color of the sphere
	GLfloat materialColor[] = {0.2f, 0.2f, 1.0f, 1.0f};
	//The specular (shiny) component of the material
	GLfloat materialSpecular[] = {0.5, 0.5, 0.5, 1.0f};
	//The color emitted by the material
	GLfloat materialEmission[] = {0.05f, 0.05f, 0.05f, 1.0f};

	glMaterialfv(GL_FRONT, GL_AMBIENT_AND_DIFFUSE, materialColor);
	glMaterialfv(GL_FRONT, GL_SPECULAR, materialSpecular);
	glMaterialfv(GL_FRONT, GL_EMISSION, materialEmission);
	glMaterialf(GL_FRONT, GL_SHININESS, 12); //The shininess parameter

	glTranslatef(g_ball.x(), g_ball.y(), g_ball.z());
	//drawSphere(g_ball.r(), 150, 80);
	g_ball.drawGameBall(150,80);
	glPopMatrix();


	glPushMatrix();
	glTranslatef(g_p1Paddle.x(), g_p1Paddle.y(), g_p1Paddle.z());
	g_p1Paddle.loadGL();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(g_p2Paddle.x(), g_p2Paddle.y(), g_p2Paddle.z());
	g_p2Paddle.loadGL();
	glPopMatrix();



	_itoa_s(g_p2Score,buffer, 10);
	glPushMatrix();
	glRotatef(40, 1, 0, 0);
	glTranslatef(9, 10, 0);
	glRasterPos2f(-10, 8);
		glColor3f(0.3f, 1.0f, 0.3f);
	t3dDraw3D(g_scoreTextPlayer2 + buffer, 0, 0, 0.2f);
	glColor3f(1.0f, 1.0f, 1.0f);

	glPopMatrix();


	_itoa_s(g_p1Score,buffer, 10);
	glPushMatrix();
	glRotatef(40, 1, 0, 0);
	glTranslatef(-9, 10, 0);
	glRasterPos2f(-10, 8);
		glColor3f(0.3f, 1.0f, 0.3f);
	t3dDraw3D(g_scoreTextPlayer1 + buffer, 0, 0, 0.2f);
	glRasterPos2f(-10, 8);
	glColor3f(1.0f, 1.0f, 1.0f);
	glPopMatrix();


	/*
	1.  Create a dynamics world.
	2. Create bodies in the dynamics world.
	3. Set the state (position etc) of all bodies.
	4. Create joints in the dynamics world.
	5. Attach the joints to the bodies.
	6. Set the parameters of all joints.
	7. Create a collision world and collision geometry objects, as necessary.
	8. Create a joint group to hold the contact joints.
	9. Loop:
		1. Apply forces to the bodies as necessary.
		2. Adjust the joint parameters as necessary.
		3. Call collision detection.
		4. Create a contact joint for every collision point, and put it in the contact joint group.
		5. Take a simulation step.
		6. Remove all joints in the contact joint group. 
	10. Destroy the dynamics and collision worlds. 

	*  dWorld - a dynamics world.
	* dSpace - a collision space.
	* dBody - a rigid body.
	* dGeom - geometry (for collision).
	* dJoint - a joint
	* dJointGroup - a group of joints. 

	*/







/*

	//ODE START

    float* pos = (float*)dGeomGetPosition(box);
    float* rot = (float*)dGeomGetRotation(box);

    float m[16];
    m[0]=rot[0]; m[4]=rot[1]; m[8] =rot[2]; m[12]=pos[0];
    m[1]=rot[4]; m[5]=rot[5]; m[9] =rot[6]; m[13]=pos[1];
    m[2]=rot[8]; m[6]=rot[9]; m[10]=rot[10];m[14]=pos[2];
    m[3]= 0.0f;  m[7]= 0.0f;  m[11]= 0.0f;  m[15]=1.0f;
//  AxeX          AxeY          AxeZ           T XYZ
   
   
    glColor3d(1,0,0);
   
    glPushMatrix();
    glMultMatrixf( m );
   
	g_ball.drawGameBall(150,80);

    glPopMatrix();
   
    glColor3d(0.8,0.8,0.8);
    glPushMatrix();
    glTranslated(0,-50,0);
  //  glutSolidCube(100);
    glPopMatrix();
	//ODE END

*/	
	SDL_GL_SwapBuffers( );
}


static void setup_opengl( int width, int height )
{
    float ratio = (float) width / (float) height;


	//load image	
	Image* image = loadBMP("redrocker.bmp");
	g_textureId = loadTexture2(image);
	delete image;



    /* Our shading model--Gouraud (smooth). */
    glShadeModel( GL_SMOOTH );

    /* Culling. */
    glCullFace( GL_BACK );
    glFrontFace( GL_CCW );
    glEnable( GL_CULL_FACE );
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_LIGHTING);
	glEnable(GL_LIGHT0);
	glEnable(GL_LIGHT1);
	glEnable(GL_NORMALIZE);
	glEnable(GL_COLOR_MATERIAL);

    /* Set the clear color. */
    glClearColor( 0, 0, 0, 0 );

    /* Setup our viewport. */
    glViewport( 0, 0, width, height );

    /*
     * Change to the projection matrix and set
     * our viewing volume.
     */
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity( );

	GLfloat ambientColor[] = {0.4f, 0.4f, 0.4f, 1.0f};
	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, ambientColor);

//	GLfloat lightColor0[] = {0.6f, 0.6f, 0.6f, 1.0f};
//	GLfloat lightPos0[] = {-0.5f, 0.5f, 1.0f, 0.0f};
//	glLightfv(GL_LIGHT0, GL_DIFFUSE, lightColor0);
//	glLightfv(GL_LIGHT0, GL_POSITION, lightPos0);

	GLfloat lightColor1[] = {0.6f, 0.6f, 0.6f, 1.0f};
	GLfloat lightPos1[] = {-1.0f, -2.0f, -2.5f, 0.0f};
	glLightfv(GL_LIGHT1, GL_DIFFUSE, lightColor1);
	glLightfv(GL_LIGHT1, GL_POSITION, lightPos1);


	t3dInit();


    /*
     * EXERCISE:
     * Replace this with a call to glFrustum.
     */
    gluPerspective( 80.0, ratio, 1.0, 1024.0 );
}


int main( int argc, char* argv[] )
{

	
	//	assert("fail");


	/* Information about the current video settings. */
    const SDL_VideoInfo* info = NULL;


     /* Dimensions of our window. */
    int width = 0;
    int height = 0;

    /* Color depth in bits of our window. */
    int bpp = 0;

    /* Flags we will pass into SDL_SetVideoMode. */
    int flags = 0;

    /* First, initialize SDL's video subsystem. */
		

	
    if ( SDL_Init( SDL_INIT_VIDEO  | SDL_INIT_AUDIO ) < 0 ) {
        /* Failed, exit. */

        printf( "Video initialization failed: %s\n", SDL_GetError( ) );
        quit_tutorial( 1 );
    }

    /* Let's get some video information. */
    info = SDL_GetVideoInfo( );

    if ( !info ) {
        /* This should probably never happen. */
		

		printf( "Video query failed: %s\n", SDL_GetError( ) );
        quit_tutorial( 1 );
    }

	

    /*
     * Set our width/height to 640/480 (you would of course let the user
     * decide this in a normal app). We get the bpp we will request from
     * the display. On X11, VidMode can't change resolution, so this is
     * probably being overly safe. Under Win32, ChangeDisplaySettings
     * can change the bpp.
     */
    width = 800;
    height = 600;
	bpp = info->vfmt->BitsPerPixel;
	SetWindowPosition(10,10);


	
	/*
     * Now, we want to setup our requested
     * window attributes for our OpenGL window.
     * We want *at least* 5 bits of red, green
     * and blue. We also want at least a 16-bit
     * depth buffer.
     *
     * The last thing we do is request a double
     * buffered window. '1' turns on double
     * buffering, '0' turns it off.
     *
     * Note that we do not use SDL_DOUBLEBUF in
     * the flags to SDL_SetVideoMode. That does
     * not affect the GL attribute state, only
     * the standard 2D blitting setup.
     */
    SDL_GL_SetAttribute( SDL_GL_RED_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_GREEN_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_BLUE_SIZE, 5 );
    SDL_GL_SetAttribute( SDL_GL_DEPTH_SIZE, 16 );
    SDL_GL_SetAttribute( SDL_GL_DOUBLEBUFFER, 1 );

    /*
     * We want to request that SDL provide us
     * with an OpenGL window, in a fullscreen
     * video mode.
     *
     * EXERCISE:
     * Make starting windowed an option, and
     * handle the resize events properly with
     * glViewport.
     */
    flags = SDL_OPENGL | SDL_HWSURFACE; //SDL_FULLSCREEN | 

    /*
     * Set the video mode
     */


	screen = SDL_SetVideoMode( width, height, bpp, flags );
	
    if ( screen == 0 ) {
        /* 
         * This could happen for a variety of reasons,
         * including DISPLAY not being set, the specified
         * resolution not being available, etc.
         */
		
        printf( "Video mode set failed: %s\n", SDL_GetError( ) );
        quit_tutorial( 1 );
    }


	


	SDL_WM_SetCaption("Dan's OpenGL Pong", 0);


	


/*
	//ODE stuff
	dMass m;
	dInitODE();
	world = dWorldCreate();
	space = dHashSpaceCreate (0);
	contactgroup = dJointGroupCreate (0);
	dWorldSetGravity (world,0,-GRAVITY,0);
	ground = dCreatePlane (space,0,1,0,0);
	body = dBodyCreate (world);
	dMassSetBox (&m,1,1,1,1);
	dMassAdjust (&m,MASS);
	dBodySetMass (body,&m);
	dBodySetPosition (body,0,0,0);
	box = dCreateBox (space,1,1,1);
	dGeomSetBody (box,body);


*/
	
	setup_opengl( width, height );



	//SDL music

	int audio_rate = 22050;
	Uint16 audio_format = AUDIO_S16SYS;
	int audio_channels = 2;
	int audio_buffers = 4096;

	
	if(Mix_OpenAudio(audio_rate, audio_format, audio_channels, audio_buffers) != 0) {
		
		printf("Unable to initialize audio: %s\n", Mix_GetError());

		exit(1);
	}

	


	sound = Mix_LoadWAV("ken_and_dan_nagle_trumpeteers.ogg");
	if(sound == NULL) {
		
		printf("Unable to load WAV file: %s\n", Mix_GetError());

	}

	

	channel = Mix_PlayChannel(-1, sound, 0);
	Mix_VolumeChunk(sound, 2);

	

	if(channel == -1) {
		
		printf("Unable to play WAV file: %s\n", Mix_GetError());
	}

//	while(Mix_Playing(channel) != 0);


	

    while (1) {
        process_events( );
        draw_screen( );
		update();
    }


	



	
	return 0;
}







void update(void) {

	float p1y, p2y, bally, p1Length, p2Length, ballx, p1x, p2x, ballr, randVal;
	unsigned int randHigh, randLow;

/*
	//ODE

   dBodyAddForce (body,0.05,0,0);
  //  dBodyAddTorque(body, -0.04, 0.00, 0.03);

    dSpaceCollide (space,0,&nearCallback);
    dWorldStep (world,0.1);

    // remove all contact joints
    dJointGroupEmpty (contactgroup);

*/
	ballx = g_ball.x();
	bally = g_ball.y();
	ballr = g_ball.r();
	p1y = g_p1Paddle.getLocation()[1];
	p2y = g_p2Paddle.getLocation()[1];
	p1x = g_p1Paddle.getLocation()[0];
	p2x = g_p2Paddle.getLocation()[0];
	p1Length = g_p1Paddle.getLength();
	p2Length = g_p2Paddle.getLength();
	bool alreadyBounced = false;

	g_ball.advance();


	//crude collision detector....
	if(1)
	{

		if(bally > 15 || bally < -7)
		{
			g_ball.newDirection(Vec3f(g_ball.currentDirection()[0], 
				-g_ball.currentDirection()[1], g_ball.currentDirection()[2]));		
		
			g_ball.advance(); //bounce effect
			g_ball.advance();
		
		}






		if(((bally+ballr) > ( p1y - p1Length)) && ((bally-ballr) < (p1y + p1Length)) 
			&& !alreadyBounced && (ballx - ballr)  < p1x && ((ballx - ballr) >  (p1x - 0.5)))  //so it won't bounce behind.
		{

			//player 1 hit it... but where?

			//checking upper fourth of paddle
			if(bally > ( (p1y + p1Length * 0.75)))
			{
				//hit upper part.  Sharp bounce!

 				randVal = (float)rand() / ((float)RAND_MAX + 1); 
				randLow=1;
				randHigh=3; 
				randVal = rand() % (randHigh - randLow + 1) + randLow;
				randVal /= 10;
				g_ball.newDirection(Vec3f(g_ball.currentDirection()[0], 
								g_ball.currentDirection()[1] + randVal, g_ball.currentDirection()[2]));		

			}

					//bottom fourth
			if(bally < ( (p1y - p1Length * 0.75)))
			{

 				randVal = (float)rand() / ((float)RAND_MAX + 1); 
				randLow=1;
				randHigh=3; 
				randVal = rand() % (randHigh - randLow + 1) + randLow;
				randVal /= 10;
				g_ball.newDirection(Vec3f(g_ball.currentDirection()[0], 
								g_ball.currentDirection()[1] - randVal, g_ball.currentDirection()[2]));		


			}



			g_ball.newDirection(Vec3f(-g_ball.currentDirection()[0], 
								g_ball.currentDirection()[1], g_ball.currentDirection()[2]));		

			g_ball.advance(); //bounce effect
			g_ball.advance();
			alreadyBounced = true;


		}


		if(((bally+ballr) > ( p2y - p2Length)) && ((bally-ballr) < (p2y + p2Length))  &&
		(bally < (p2y + p2Length)) && !alreadyBounced && (ballx + ballr) > p2x && ((ballx + ballr) <  (p2x + 0.5)))  //so it won't bounce behind.
		{



			//player 2 hit it... but where?

			//checking upper fourth of paddle
			if(bally > ( (p2y + p1Length * 0.75)))
			{
				//hit upper part.  Sharp bounce!

 				randVal = (float)rand() / ((float)RAND_MAX + 1); 
				randLow=1;
				randHigh=3; 
				randVal = rand() % (randHigh - randLow + 1) + randLow;
				randVal /= 10;
				g_ball.newDirection(Vec3f(g_ball.currentDirection()[0], 
								g_ball.currentDirection()[1] + randVal, g_ball.currentDirection()[2]));		

			}

					//bottom fourth
			if(bally < ( (p2y - p2Length * 0.75)))
			{

 				randVal = (float)rand() / ((float)RAND_MAX + 1); 
				randLow=1;
				randHigh=3; 
				randVal = rand() % (randHigh - randLow + 1) + randLow;
				randVal /= 10;
				g_ball.newDirection(Vec3f(g_ball.currentDirection()[0], 
								g_ball.currentDirection()[1] - randVal, g_ball.currentDirection()[2]));		


			}


			g_ball.newDirection(Vec3f(-g_ball.currentDirection()[0], 
								g_ball.currentDirection()[1], g_ball.currentDirection()[2]));

			g_ball.advance(); //bounce effect
			g_ball.advance();
			alreadyBounced = true;

		}

	}


	if((ballx < -15) || (ballx > 15))
	{
		if(ballx < -15) 
		{
			g_p2Score++;
			g_ball.newDirection(Vec3f(0.1f,0,0));
			g_ball.newPosition(Vec3f(0,0,0));
			g_ball.advance();
		}
		if(ballx > 15) 
		{
			g_p1Score++;
			g_ball.newDirection(Vec3f(-0.1f,0,0));
			g_ball.newPosition(Vec3f(0,0,0));
			g_ball.advance();
		}


			//(float)rand() / ((float)RAND_MAX + 1)


	}

	//update paddles
	g_p2Paddle.newLocation(g_p2Paddle.getLocation() + g_p2Paddle.getVelocity());
	g_p1Paddle.newLocation(g_p1Paddle.getLocation() + g_p1Paddle.getVelocity());




}
