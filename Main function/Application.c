#include"Header.h"

int main()
{
	//welcome window
	Print();
	//loading window..
	load();
	//To set the initial values ​​of the variables
	SetUp();
	while (!GameOver)
	{
		//to display borders, fruit and snake body on the window and clear the previous window
		Draw();
		//to take action from user
		Input();
		//to connect the snake body with its head and move them, update the score value and other variables
		Logic();
		//to slow the game a little bit by (ms)
		Sleep(speed);
	}
}
