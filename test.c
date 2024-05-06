int main() //创建主函数
{
	srand((unsigned)time(NULL)); //生成随机数随机数(后面用到)
	test(); //在test();中实现游戏逻辑，让主函数更简洁
 
	return 0;
}
void test() //定义test();函数
{
	int input = 0;
	do
	{
		menu();  //打印菜单
 
		//选择游戏进程
 
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();  //实现游戏逻辑
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误!!!(请重新输入1 or 0)\n");
			break;
		}
 
	} while (input); //每次游戏结束后让玩家选择，当玩家输入1为真游戏继续并开始，输入0为假退出循                                                                
                     // 环，游戏结束。
}
void menu()
{
	printf("***********************\n");
	printf("****    1. play    ****\n");
	printf("****    0. exit    ****\n");
	printf("***********************\n");
 
}
void game()
{
	//创建棋盘
	char board[ROW][COL] = { 0 };
	//棋盘初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家回合
		Player_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断结束或继续
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑回合
		Computer_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	//判断输赢
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
#include "game.h"
 
//打印菜单
void menu()
{
	printf("***********************\n");
	printf("****    1. play    ****\n");
	printf("****    0. exit    ****\n");
	printf("***********************\n");
 
}
 
 
//游戏实现
void game()
{
	//创建棋盘
	char board[ROW][COL] = { 0 };
	//棋盘初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家回合
		Player_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断结束或继续
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑回合
		Computer_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	//判断输赢
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
 
void test()
{
	int input = 0;
	do
	{
		//打印菜单
		menu();
		//选择游戏进程
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误!!!(请重新输入1 or 0)\n");
			break;
		}
 
	} while (input);
}
 
int main()
{
	//随机数
	srand((unsigned)time(NULL));
	test();
 
	return 0;
}
#include "game.h"
 
//打印菜单
void menu()
{
	printf("***********************\n");
	printf("****    1. play    ****\n");
	printf("****    0. exit    ****\n");
	printf("***********************\n");
 
}
 
 
//游戏实现
void game()
{
	//创建棋盘
	char board[ROW][COL] = { 0 };
	//棋盘初始化
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//玩家回合
		Player_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断结束或继续
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		//电脑回合
		Computer_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	//判断输赢
	if (ret == '*')
		printf("玩家赢\n");
	else if (ret == '#')
		printf("电脑赢\n");
	else
		printf("平局\n");
}
 
void test()
{
	int input = 0;
	do
	{
		//打印菜单
		menu();
		//选择游戏进程
		printf("请输入:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏结束\n");
			break;
		default:
			printf("输入错误!!!(请重新输入1 or 0)\n");
			break;
		}
 
	} while (input);
}
 
int main()
{
	//随机数
	srand((unsigned)time(NULL));
	test();
 
	return 0;
}

