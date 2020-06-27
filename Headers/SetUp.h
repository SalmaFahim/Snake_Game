#include<time.h>
#include <stdlib.h>

//borders
#define height 20
#define width 20
enum Direction { STOP = 0, LEFT, RIGHT, UP, DOWN, PAUSE };

extern int GameOver, Dir, score, FruitX, FruitY, HeadX, HeadY;
