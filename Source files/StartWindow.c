#include"StartWindow.h"

//there is two function here

//welcome window
void Print()
{
	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\tWELCOME TO THE MINI SNAKE GAME.(press any key to continue)\n");
	_getch();
	system("cls");
	printf("\n\tGAME INSTRUCTIONS:\n");
	printf("\n-> Use arrow keys to move the snake.\n\n-> You will be provided foods at the several coordinates of the screen which you have to eat.\n   Everytime you eat a food the length of the snake will be increased by 1 element and score = 5 * length.\n\n-> If the score reached 30 the snake speed will be increased gradually.\n\n-> If the snake hits itself the game will end.\n\n-> If the snake hits the borders,it will appear in the opposite side.\n\n-> If you want to exit press esc. \n");
	printf("\n\nPress any key to play game...");
	if (_getch() == 27)
		exit(0);
}


//loading window..
void load()
{
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\tloading...\n\t\t\t\t");
	for (int r = 1; r <= 20; r++)
	{
		for (int q = 0; q <= 100000000; q++); //to display the character slowly
		printf("%c", 177);
	}
	printf("\n\t\t\t\tpress any key to start the game");
	_getch();
}