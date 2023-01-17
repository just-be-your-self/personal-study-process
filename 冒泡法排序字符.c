#include <stdio.h>
#include <string.h>

int fun(int a[10]) 
{
	int i,j;
	int t;
	
	for(i = 0;i < 9;i++)
	{
		for(j = 0;j < 9-i;j++)
		{
			if(a[j] > a[j+1])
			{
				t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	
	printf("排序完成：\n");
	for(i = 0;i < 10;i++)
	printf("%d ",a[i]); 
}

int main()
{
	int a[10];
	int i; 
	
	printf("请输入数字：\n");
	for(i = 0;i < 10;i++)
	scanf("%d",&a[i]);
	
	fun(a);
}

