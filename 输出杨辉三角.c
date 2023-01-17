#include <stdio.h>

int main()
{
	int n,x[100][100],i,j;
	printf("你打算输出多少行：\n");
	scanf("%d", &n);
	x[0][0] = 1;
	x[1][0] = 1;
	x[1][1] = 1;
	printf("%5d\n", x[0][0]);  
	printf("%5d", x[1][0]);  
	printf("%5d\n", x[1][1]);  
	for(i=2;i<n;i++){
		x[i][0] = 1;   
		printf("%5d", x[i][0]);  
		for(j=1;j<i;j++){
			x[i][j] = x[i-1][j-1]+x[i-1][j];  
			printf("%5d", x[i][j]);  
		}
		x[i][i] = 1;  
		printf("%5d\n", x[i][i]);
	}
	return 0;
}

