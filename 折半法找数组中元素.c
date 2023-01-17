#include<stdio.h>

int main()
{
	int min=0, mid, max=14,n,i=0;
	int a[15] = { 2,4,6,8,10,12,14,16,18,20,22,24,26,28,30 };
	
	printf("请输入要查找的数n：");
	scanf("%d", &n);
	while (min <= max)
	{
		mid = (min + max) / 2;
		if (n > a[mid])
			min = mid + 1;
		if (n < a[mid])
			max = mid - 1;
		if(n==a[mid])
			{
				printf("要找的数为数组中的第%d个元素", mid + 1);
				i = 1;
				break;
			}
	}
	if (i == 0)
		printf("无此数");
	return 0;
}
