// SDL_GL_Functions: Copied from gpwiki.org.
//#include <cstdlib> // For some useful functions such as atexit :)
#include "SDL.h" // main SDL header
#include "SDL_opengl.h"
//#include "SDL_ttf.h"
#include <iostream>
#include <stdlib.h>
#undef main



#include <math.h>


#include "vec3f.h"
#include "paddle.h"

using namespace std;



Paddle::Paddle() {
	this->location = Vec3f(0, 0, 0);
	this->velocity = Vec3f(0, 0, 0);

	this->scaler = 1;
	this->length = 3;
	this->depth = 2;

}

Paddle::Paddle(float scaler, float length, float depth, Vec3f location) {

	this->location = location;
	this->velocity = Vec3f(0, 0, 0);

	this->scaler = scaler;
	this->length = length;
	this->depth = depth;
}

Vec3f Paddle::getLocation() {
	return this->location;

}

Vec3f Paddle::getVelocity() {
	return this->velocity;

}

void Paddle::setVelocity(Vec3f newVelocity) {
	this->velocity = newVelocity;

}


float Paddle::getLength() {
	return this->length;

}


float Paddle::getDepth() {
	return this->depth;

}


float Paddle::getScaler() {
	return this->scaler;

}


float Paddle::x() {
	return this->location[0];
}

float Paddle::y() {
	return this->location[1];
}

float Paddle::z() {
	return this->location[2];
}


void Paddle::newLocation(Vec3f newPos) {
	this->location = newPos;
}


void Paddle::loadGL() {
	
	glBegin(GL_QUADS);							
		// Bottom Face
	glColor3f(1.0f, 0.0f, 1.0f); 
	glVertex3f(-scaler, -length, -depth);	// Top Right Of Quad
	glVertex3f( scaler, -length, -depth);	// Top Left Of Quad
	glVertex3f( scaler, -length,  depth);	// Bottom Left Of Quad
	glVertex3f(-scaler, -length,  depth);	// Bottom Right Of Quad
	// Front Face
	glColor3f(0.0f, 0.0f, 1.0f); 
	glVertex3f(-scaler, -length,  depth);	// Bottom Left Of Quad
	glVertex3f( scaler, -length,  depth);	// Bottom Right Of Quad
	glVertex3f( scaler,  length,  depth);	// Top Right Of Quad
	glVertex3f(-scaler,  length,  depth);	// Top Left Of Quad
	// Back Face
	glColor3f(1.0f, 0.0f, 1.0f); 
	glVertex3f(-scaler, -length, -depth);	// Bottom Right Of Quad
	glVertex3f(-scaler,  length, -depth);	// Top Right Of Quad
	glVertex3f( scaler,  length, -depth);	// Top Left Of Quad
	glVertex3f( scaler, -length, -depth);	// Bottom Left Of Quad
	// Right face
	glColor3f(0.0f, 1.0f, 1.0f); 
	glVertex3f( scaler, -length, -depth);	// Bottom Right Of Quad
	glVertex3f( scaler,  length, -depth);	// Top Right Of Quad
	glVertex3f( scaler,  length,  depth);	// Top Left Of Quad
	glVertex3f( scaler, -length,  depth);	// Bottom Left Of Quad
	// Left Face
	glColor3f(0.0f, 1.0f, 1.0f); 
	glVertex3f(-scaler, -length, -depth);	// Bottom Left Of Quad
	glVertex3f(-scaler, -length,  depth);	// Bottom Right Of Quad
	glVertex3f(-scaler,  length,  depth);	// Top Right Of Quad
	glVertex3f(-scaler,  length, -depth);	// Top Left Of Quad
	glColor3f(1.0f, 1.0f, 1.0f); 
	// Close Face
	glColor3f(1.0f, 0.0f, 1.0f); 
	glVertex3f(-scaler, length, -depth);	// Top Right Of Quad
	glVertex3f( scaler, length, -depth);	// Top Left Of Quad
	glVertex3f( scaler, length,  depth);	// Bottom Left Of Quad
	glVertex3f(-scaler, length,  depth);	// Bottom Right Of Quad
	glColor3f(1.0f, 1.0f, 1.0f); 
	glEnd();				


}

