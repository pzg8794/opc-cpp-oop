
#ifndef PADDLE_H_INCLUDED
#define PADDLE_H_INCLUDED


#include "vec3f.h"

using namespace std;

class Paddle {
	private:
		Vec3f location; 
		Vec3f velocity;
		float length; 
		float depth;
		float scaler;
	public:
		Paddle();
		Paddle(float scaler, float length, float depth, Vec3f location);
		Vec3f getLocation();
		Vec3f getVelocity();
		float getLength();
		float getDepth();
		float getScaler();
		void loadGL();
		float x();
		float y();
		float z();
		void newLocation(Vec3f newPos);
		void setVelocity(Vec3f newVelocity);

};




#endif