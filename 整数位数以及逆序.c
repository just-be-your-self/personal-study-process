#include <stdio.h>
#include <math.h>
int main()
{
	int n,k;
	int i;
	int j=0;
	int count = 0;                      
	printf("请输入不多于五位的正整数：");
	scanf("%d",&n);                     
	
	k=n;
	
   do
   {
   	k/=10;
   	count++;
   }while(k!=0);
   printf("位数是%d\n",count);
   
   printf("依次输出为：%d ",n); 

     printf("逆序输出为：");
	for(i=1;i<=5;i++)              
	{
		j=n%10;                          
		n/=10;                          
	    printf("%d",j);
		if(n==0)
		{
			break;
		}
	}
	printf("\n");


	return 0;
}



