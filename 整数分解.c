#include<stdio.h>

int main()
{
	int x;
	scanf("%d",&x);
	
	x=70000;
	int mask=10000;
	do{
		int d=x/mask;
		printf("%d",d);
		if(mask>9){
			printf(" ");
		}
		x%=mask;
		mask/=10;
	}while(mask>0);
	
	printf("\n");
	
	return 0;
}
