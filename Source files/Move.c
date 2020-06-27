#include"Move.h"

//to connect the snake body with its head and move them, update the score value and other variables
void Logic()
{
	
	int prevX = tailX[0];
	int prevY = tailY[0];
	int prev2X, prev2Y;
	tailX[0] = HeadX;
	tailY[0] = HeadY;
	for (int i = 1; i < nTail; i++)
	{
		//copy every next element to prevx , prevy
		prev2X = tailX[i];
		prev2Y = tailY[i];
		//move every next piece in the previous position
		tailX[i] = prevX;
		tailY[i] = prevY;
		//change the previous to the new piece 
		prevX = prev2X;
		prevY = prev2Y;
	}
	switch (Dir)
	{
	case UP:
		HeadY--;
		break;
	case DOWN:
		HeadY++;
		break;
	case RIGHT:
		HeadX++;
		break;
	case LEFT:
		HeadX--;
		break;
	default :
		break;
	}

	//if the snake hit the borders come from anther side
	if (HeadX < 0)
	{
		HeadX = width - 1;
	}
	else if (HeadX >= width)
	{
		HeadX = 0;
	}
	else if (HeadY < 0)
	{
		HeadY = height - 1;
	}
	else if (HeadY >= height)
	{
		HeadY = 0;
	}
	
	
	//if the snake hit itself
	for (int i = 1; i < nTail; i++)       
	{
		if (tailX[i] == HeadX && tailY[i] == HeadY)
		{
			GameOver = 1;
		}
	}


	//if the snake eat the fruit
	if (FruitX == HeadX && FruitY == HeadY)
	{
		score += 5;
		FruitX = rand() % width;    //generate random numbers form 0 to 19
		FruitY = rand() % height;   //generate random numbers from 0 to 19
		nTail++;
		if (score > 20 && ((score % 10) == 0) && speed!=0)
		{
			speed -= 5;
		}
	}
	
}