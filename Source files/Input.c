#include"Input.h"

//to take action from user
void Input()
{
	if (_kbhit())
	{
		switch (getch())
		{
		case 75:
			Dir = LEFT;
			break;
		case 77:
			Dir = RIGHT;
			break;
		case 72:
			Dir = UP;
			break;
		case 80:
			Dir = DOWN;
			break;
			//to exit the game press "esc" 
		case 27:
			//to remove the game window 
			system("cls");
			GameOver = 1;
			break;
		default:
			break;
		}
	}

}