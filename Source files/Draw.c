#include"Draw.h"


//to display borders, fruit and snake body on the window and clear the previous window
void Draw()
{
	//clear the widow
	system("cls");
	//print the borders

	printf("######################\n");

	//print #    #
	//      #    #
	for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < width; j++)
		{
			if (j == 0)
			{
				printf("#");
			}
			if (i == HeadY && j == HeadX)
			{
				printf("O");
			}
			//print fruit
			else if (j == FruitX && i == FruitY)
			{
				printf("o");
			}
			else
			{
				//print snake body
				int check = 0;
				for (int k = 0; k < nTail; k++)
				{
					if (tailX[k] == j && tailY[k] == i)
					{
						printf("o");
						check = 1;
					}
				}
				if (!check)
				{
					printf(" ");
				}

			}
			if (j == width - 1)
			{
				printf("#");
			}
		}
		printf("\n");
	}

	//print ######
	for (int i = 1; i <= width+2; i++)
	{
		printf("#");
	}
	printf("\nScore: %d\n", score);
}

