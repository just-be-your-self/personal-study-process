 #define _CRT_SECURE_NO_WARNINGS 1 		
#include<stdio.h>
#include<math.h>

int main()
{
	int  i;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		int j = 0;
		for (j = 2; j <=sqrt(i); j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (j>sqrt(i))
		{
			count++;
			printf("%d ", i);
		}
	}
	printf("\n100��200֮���������%d��", count);
	return 0;
}