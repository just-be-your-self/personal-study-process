#include<stdio.h>

int main()
{
	int number;
	int sum = 0;
	int count =0 ;
	
	scanf("%d",&number);
    do{
    	scanf("%d",&number);
    	if (number!=-1) {
    		sum += number;
    		count ++;
		}
	} while (number!=-1);
		
	
	printf ("%d\n",sum / count);
	return 0;
}
