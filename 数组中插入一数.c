#include<stdio.h>

int main()
{
	int a[11]={1,4,6,7,9,23,34,56,65,67,89};
	int number,end=0,i=0,j=0,t1=0,t2=0;

    printf("请输入一个整数：\n");
    scanf("%d",&number);
    
	end=a[9];
	if(number>end)
	 a[10]=number;
	else
	{
	 for(i=0;i<10;i++)
	 if(a[i]>number)
	 {
	 t1=a[i];
	 a[i]=number;
	 a[i+1]=t1;
	 break;
	 }
	 
	}
	for(i=0;i<11;i++)
	printf("%d ",a[i]);
	
	return 0;
}
