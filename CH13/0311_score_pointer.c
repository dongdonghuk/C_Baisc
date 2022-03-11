#include <stdio.h>

void scoreCalc(int(*tmp)[7], int row, int col);


int main()
{
	int score[5][7] = {
						{79,86,65,95},
						{99,78,62,98},
						{49,46,68,92},
						{95,67,85,86},
						{35,78,64,65}
	};

	int row, col;
	int i, j;

	row = sizeof(score) / sizeof(score[0]);
	col = sizeof(score[0]) / sizeof(score[0][0]);


	scoreCalc(score, row, col-3);

	heading();

	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			printf("%3d, ", score[i][j]);
		//printf("%3d, ", *(*(tmp+i) + j));
		printf("\n");
	};

	return 0;
}

//score �迭�� ��, ���, ������ ���
void scoreCalc(int (*tmp)[7], int row, int col)	//�迭������ ����
//scoreCalc(int tmp[][4])	//�迭������ ����  (*tmp)[4] == tmp[][4]
{	
	int i, j;

	printf("\n scoreCalc(): %d, %p \n", sizeof(tmp), tmp);

	for (i = 0; i < row; i++)
	{	
		for (j = 0; j < col; j++)
			tmp[i][4] += tmp[i][j];
		tmp[i][5] = tmp[i][4] / col;
	};

	for (i = 0; i < row; i++)
	{
		tmp[i][6] = 1;
		for (j = 0; j < row; j++)
		{
			if (tmp[i][5] < tmp[j][5])
				tmp[i][6]++;
		}

	}
}

heading()
{
	printf("============================================= \n");
	printf("���� ���� ���� ���� ���� ��� ���� \n");
	printf("============================================= \n");
}