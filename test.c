int main() //����������
{
	srand((unsigned)time(NULL)); //��������������(�����õ�)
	test(); //��test();��ʵ����Ϸ�߼����������������
 
	return 0;
}
void test() //����test();����
{
	int input = 0;
	do
	{
		menu();  //��ӡ�˵�
 
		//ѡ����Ϸ����
 
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();  //ʵ����Ϸ�߼�
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������!!!(����������1 or 0)\n");
			break;
		}
 
	} while (input); //ÿ����Ϸ�����������ѡ�񣬵��������1Ϊ����Ϸ��������ʼ������0Ϊ���˳�ѭ                                                                
                     // ������Ϸ������
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
	//��������
	char board[ROW][COL] = { 0 };
	//���̳�ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//��һغ�
		Player_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϽ��������
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		//���Իغ�
		Computer_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	//�ж���Ӯ
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
#include "game.h"
 
//��ӡ�˵�
void menu()
{
	printf("***********************\n");
	printf("****    1. play    ****\n");
	printf("****    0. exit    ****\n");
	printf("***********************\n");
 
}
 
 
//��Ϸʵ��
void game()
{
	//��������
	char board[ROW][COL] = { 0 };
	//���̳�ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//��һغ�
		Player_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϽ��������
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		//���Իغ�
		Computer_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	//�ж���Ӯ
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
 
void test()
{
	int input = 0;
	do
	{
		//��ӡ�˵�
		menu();
		//ѡ����Ϸ����
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������!!!(����������1 or 0)\n");
			break;
		}
 
	} while (input);
}
 
int main()
{
	//�����
	srand((unsigned)time(NULL));
	test();
 
	return 0;
}
#include "game.h"
 
//��ӡ�˵�
void menu()
{
	printf("***********************\n");
	printf("****    1. play    ****\n");
	printf("****    0. exit    ****\n");
	printf("***********************\n");
 
}
 
 
//��Ϸʵ��
void game()
{
	//��������
	char board[ROW][COL] = { 0 };
	//���̳�ʼ��
	InitBoard(board, ROW, COL);
	//��ӡ����
	DisplayBoard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		//��һغ�
		Player_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϽ��������
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
		//���Իغ�
		Computer_Move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		ret = Is_Win(board, ROW, COL);
		if (ret != 'C')
			break;
	}
	//�ж���Ӯ
	if (ret == '*')
		printf("���Ӯ\n");
	else if (ret == '#')
		printf("����Ӯ\n");
	else
		printf("ƽ��\n");
}
 
void test()
{
	int input = 0;
	do
	{
		//��ӡ�˵�
		menu();
		//ѡ����Ϸ����
		printf("������:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ����\n");
			break;
		default:
			printf("�������!!!(����������1 or 0)\n");
			break;
		}
 
	} while (input);
}
 
int main()
{
	//�����
	srand((unsigned)time(NULL));
	test();
 
	return 0;
}

