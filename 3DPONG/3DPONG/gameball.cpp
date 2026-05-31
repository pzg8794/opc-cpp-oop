


#include <math.h>
#include "SDL.h" // main SDL header
#include "SDL_opengl.h"



#include "vec3f.h"
#include "gameball.h"


using namespace std;


#define M_PI       3.14159265358979323846


GameBall::GameBall() {
	this->position = Vec3f(0.0f, 0.0f, 0.0f);
	this->radius = 1.0f;
	this->direction = Vec3f(0.5f, 0.0f, 0.0f); //start moving in x direction
}

GameBall::GameBall(float radius, Vec3f pos, Vec3f vel) {
	this->position = pos;
	this->radius = radius;
	this->direction = vel;

}

float GameBall::x() {
	return this->position[0];
}

float GameBall::y() {
	return this->position[1];
}

float GameBall::z() {
	return this->position[2];
}

float GameBall::r() {
	return this->radius;
}

void GameBall::advance() {
	this->position += this->direction;
}

void GameBall::newDirection(Vec3f newDir) {
	this->direction = newDir;
}

Vec3f GameBall::currentDirection() {
	return this->direction;
}

void GameBall::newPosition(Vec3f newPos) {
	this->position = newPos;
}



		//drawSphere(g_ball.r(), 150, 80);

void GameBall::drawGameBall(int lats, int longs) {

	double r = this->radius;

	for(int i = 0; i <= lats; i++) {
		double lat0 = M_PI * (-0.5 + (double) (i - 1) / lats);
		double z0  = sin(lat0);
		double zr0 =  cos(lat0);

		double lat1 = M_PI * (-0.5 + (double) i / lats);
		double z1 = sin(lat1);
		double zr1 = cos(lat1);


		glBegin(GL_QUAD_STRIP);


		for(int j = 0; j <= longs; j++) {
			double lng = 2 * M_PI * (double) (j - 1) / longs;
			double x = cos(lng);
			double y = sin(lng);




			glNormal3f(x * zr0, y * zr0, z0);
			glVertex3f(x * zr0, y * zr0, z0);
			glNormal3f(x * zr1, y * zr1, z1);
			glVertex3f(x * zr1, y * zr1, z1);
		}
		glEnd();
	}
}



