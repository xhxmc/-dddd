#pragma once
 
//ͷ�ļ�����
#include <stdio.h>
#include<stdlib.h>
#include <time.h>
 
//����곣��
#define ROW 3
#define COL 3
 
//��������
void InitBoard(char board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL], int row, int col);
void Player_Move(char board[ROW][COL], int row, int col);
void Computer_Move(char board[ROW][COL], int row, int col);
 
//char��������
//������"*"����һ�ʤ
//������"#"����һ�ʤ
//������"D"(draw)��ƽ��
//������"C"(continue)��Ϸ����
char Is_Win(char board[ROW][COL], int row, int col);
 
int Is_Full(char board[ROW][COL], int row, int col);
