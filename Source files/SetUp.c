#include"SetUp.h"


//To set the initial values ​​of the variables
void SetUp()
{
	GameOver = 0;
	Dir = STOP;
	//initialize the position of the snake
	HeadX = width / 2;
	HeadY = height / 2;

	//to generate different random numbers on every program run
	srand(time(0));
	FruitX =rand() %width;    //generate random numbers form 0 to 19
	FruitY =rand() %height;   //generate random numbers from 0 to 19
	
	//if the position of fruit is the same of snake change it
	if (FruitX == HeadX && FruitY == HeadY)
	{
		FruitX = 3;
		FruitY = 3;
	}
	score = 0;
}