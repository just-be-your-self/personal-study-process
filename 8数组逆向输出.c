#include<stdio.h>
#define size 8

int main()
{
	int vals[size];
	int i;
	
	printf("please enter %d integers.\n",size);
	for(i=0;i<size;i++){
		scanf("%d",&vals[i]);
	}
		printf("here,in reverse order,are the values you entered:\n");
	
		for(i=size-1;i>=0;i--){
			printf("%d ",vals[i]);
		}
			printf("\n");
			
			
			return 0;
}
