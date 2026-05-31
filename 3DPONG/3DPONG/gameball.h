

#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED

#include "vec3f.h"

using namespace std;

class GameBall {
	private:
		float radius;
		Vec3f position; 
		Vec3f direction;
	public:
		GameBall();
		GameBall(float radius, Vec3f pos, Vec3f vel);
		float x();
		float y();
		float z();
		float r();
		void advance();
		void newDirection(Vec3f newDir);
		Vec3f currentDirection();
		void newPosition(Vec3f newPos);
		void drawGameBall(int lats, int longs);


};


#endif
