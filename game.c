//���̳�ʼ��
//void ���ͺ�����char board[ROW][COL]��ά�������ָ�룬int row��int col����ROW\COL���β�
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++) //��forѭ�����Զ�ά������г�ʼ��
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
//���̴�ӡ
//�˷�ʽ��ӡ���������̣�����ͨ����COW��COL�곣�����޸����ı����̴�С
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for(j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
			printf("\n");
	}
}
//��һغ�
void Player_Move(char board[ROW][COL], int row, int col)
{
	printf("��һغ�\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("������:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("��λ���ѱ�ռ��!!!\n");
			}
		}
		else
		{
			printf("�������!!!(����������1 ~ 3)\n");
		}
	}
}
void Computer_Move(char board[ROW][COL], int row, int col)
{
	printf("���Իغ�\n");
	while (1)
	{
		int x = rand() % row;  //rand()��֮ǰ����������srand()��ͬ�������������
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
//�ж���Ϸ�Ƿ����
char Is_Win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 1; j < col; j++)
		{
			if (board[i][j - 1] == board[i][j] && board[i][j] == board[i][j + 1] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	for (j = 0; j < col; j++)
	{
		for(i = 1; i < row - 1; i++)
			if (board[i - 1][j] == board[i][j] && board[i][j] == board[i + 1][j] && board[i][j] != ' ')
				return board[i][j];
	}
	for (i = 1; i < row - 1; i++)
	{
		for (j = 1; j < col - 1; j++)
		{
			if (board[i - 1][j - 1] == board[i][j] && board[i][j] == board[i + 1][j + 1] && board[i][j] != ' ')
				return board[i][j];
			if (board[i - 1][j + 1] == board[i][j] && board[i][j] == board[i + 1][j - 1] && board[i][j] != ' ')
				return board[i][j];
		}
	}
	if (1 == Is_Full(board, row, col))
		return 'D';
	else
		return 'C';
}
 
//�ж������Ƿ�����
int Is_Full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
