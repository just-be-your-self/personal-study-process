#include<stdio.h>
#define M 3
#define N 4

int main()
{
	int max, min, rowindex, colindex, flag = 0;
	int array[M][N];
	int i=0;
	int j=0;
	printf("������%d��%d�е�����:\n", M, N);
	for ( i = 0; i < M; i++)
	{
		for (j = 0; j < N; j++)
			scanf("%d", &array[i][j]);
	}

	for ( i = 0; i < M; ++i)
	{
		max = array[i][0];
		for ( j = 0; j < N; ++j)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				colindex = j;
			}
		}

		min = array[0][colindex];
		for (j = 0; j < M; ++j)
		{
			if (array[j][colindex] < min)
			{
				min = array[j][colindex];
				rowindex = j;
			}
		}

		if (max == min && i == rowindex)
		{
			flag = 1;
			printf("����Ϊ��%d��%d�е�Ԫ��%d", rowindex, colindex, max);
			break;
		}
	}

	if (0 == flag)
		printf("û�а���");
		
	return 0;
}

