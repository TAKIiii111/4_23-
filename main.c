//编写一个猜数字游戏代码

#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//定义一个函数，为游戏的菜单
void menu()
{
	//打印菜单
	printf("**********欢迎来到猜数字游戏**********\n");
	printf("1.开始游戏\n");
	printf("0.退出游戏\n");
	printf("************************************\n");
	printf("请输入你的选择：\n");
}


//定义一个函数game，为游戏的主体
void game()
{
	//定义一个变量，存储随机数
	int sj = 0;
	//定义一个变量，存储用户输入的数字
	int guess = 0;
	//生成一个随机数
	sj = rand() % 100 + 1;

	printf("------------游戏开始！------------\n");

	//提示用户输入数字
	printf("请输入你猜的数字(1-100):\n");


	//循环直到猜对为止
	do
	{
		scanf("%d", &guess);
		if (guess > sj)
		{
			printf("猜大了，请重新输入:");
		}
		else if (guess < sj)
		{
			printf("猜小了，请重新输入:");
		}
		else
		{
			printf("恭喜你，猜对了！\n");
			break;
		}
	} while (guess != sj);

}



int main()
{
	//设置随机数种子
	srand((unsigned int)time(NULL));

	//定义一个变量，存储用户的选择
	int input = 0;

	menu();

	
	scanf("%d", &input);

	//循环直到用户选择退出
	do
	{
		switch (input)
		{
		case 1:
			game();
			int xz = 0;
		chonglai:
			printf("游戏结束，是否继续？\n(1.继续 0.退出):");

			scanf("%d", &xz);
			if (xz==1)
			{
				game();
				goto chonglai;
			}
			else
			{
				printf("退出成功\n");
				input = 0;
				break;
			}
			

		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入：\n");
			menu();
			scanf("%d", &input);
			break;
		}
	} while (input);
	
	return 0;
}