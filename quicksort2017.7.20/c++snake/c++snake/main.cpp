#include"snake.h"
#include"manp.h"
#include"food.h"
void main()//▧❤❁✪■●♠♥♦♣★✙
{
	
	while (1)
	{
		Manp manp;
	    Food food;
	    Snake snake;
	    srand(time(NULL));
		system("cls");
		manp.showmanp();
		food.printfood();
		while (1)
		{
			snake.getdir();
			if (snake.snakemeetfood(food.getfoodcoorx(), food.getfoodcoory()))
			{
				snake.snakecreat();
				food.creatfood();
				food.printfood();
				food.textfood(snake.head);
			}
			snake.snakemove();
			if (snake.textself() || manp.juge(snake.head))
				break;
			Sleep(200);
		}
		if (manp.exitgame())
			break;
	}
	system("pause");
}