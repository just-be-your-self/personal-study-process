#include<stdio.h>

void chlinerow(char ch,int c,int r);
int main()
{
	char ch;
	int col,row;
	
	printf("enter a character(# to quit):");
	while((ch=getchar())!='#')
	{
		if(ch=='\n')
		   continue;
		   printf("enter number of columns and number of rows:\n");
		if(scanf("%d %d",&col,&row)!=2)
		   break;
		   chlinerow(ch,col,row);
		   printf("\nenter next character(# to quit):");
	}
	printf("Bye!\n");
	
	return 0;
}

void chlinerow(char ch,int c,int r)
{
	int col,row;
	for(row=0;row<r;row++)
	{
		for(col=0;col<c;col++)
		putchar(ch);
		putchar('\n');
	}
	return;
}
