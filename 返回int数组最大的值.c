#include<stdio.h>
#define LEN 10

int max_arr(const int ar[],int n);
void show_arr(const int ar[],int n);

int main()
{
	int orig[LEN]={1,2,3,4,12,6,7,8,9,10};
	int max;
	
	show_arr(orig,LEN);
	max=max_arr(orig,LEN);
	printf("%d=largest vulue\n",max);
	
	return 0;
}

void show_arr(const int ar[],int n)
{
	int i;
	for(i=0;i<n;i++)
	 printf("%d ",ar[i]);
	 putchar('\n');
}

int max_arr(const int ar[],int n)
{
	int i;
	int max=ar[0];
	
	for(i=0;i<n;i++)
		if(max<ar[i])
		max=ar[i];
		
		return max;
}
