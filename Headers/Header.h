#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#include<conio.h>
#include <Windows.h>

//borders
#define height 20
#define width 20

int GameOver = 1;
int HeadX, HeadY, FruitX, FruitY, score;
int Dir;

//snake body
int tailX[100], tailY[100];
int nTail;
//snake speed
int speed = 30;

enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN, PAUSE };

//welcome window
void Print();
//loading window..
void load();
//To set the initial values ​​of the variables
void SetUp();
//to display borders, fruit and snake body on the window and clear the previous window
void Draw();
//to take action from user
void Input();
//to connect the snake body with its head and move them, update the score value and other variables
void Logic();

