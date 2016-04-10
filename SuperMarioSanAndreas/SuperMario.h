#pragma once
#include <allegro5/allegro.h> //telling vs we are using allegro functions
#include <iostream> //used for keyboard input and output
#include <allegro5/allegro_image.h> //used for animations and insertion of images
using namespace std;

class SuperMario
{
public:
	SuperMario();//default constructor
	~SuperMario();//default destructor
	int sourceX = 0, sourceY = 0;//used for cropping the SpriteSheet for animation

	enum DIRECTION{ RIGHT, LEFT, DOWN, UP, NONE1, NONE2 }; //Defines the different states or directions of mario. NONE1=facing right NONE2=facing left	


	bool done = false;//used to determine when game will exit
	bool active = false; //will help cause the animation ONLY if key is pressed in particular direction
	bool draw = true;//for timer, used for smooth animations
	float x = 10, y = 10, moveSpeed = 5; // x and y are starting co-ordinates of Mario, moveSpeed is the increment of the co-ordinates hence will det how fast Mario moves

	const float FPS = 100; //used for the timer, will help determine the number of times the game will refresh per second (frames/sec)
	int check = 0; //will record Marios last left or right movement to decide which side he will face after the key is left
	int dir = DOWN; //the initial direction of Mario is set to down
};
