#include <stdio.h>
#include <math.h>
int main()
{
	int n,k;
	int i;
	int j=0;
	int count = 0;                      
	printf("�����벻������λ����������");
	scanf("%d",&n);                     
	
	k=n;
	
   do
   {
   	k/=10;
   	count++;
   }while(k!=0);
   printf("λ����%d\n",count);
   
   printf("�������Ϊ��%d ",n); 

     printf("�������Ϊ��");
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



