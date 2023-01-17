#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j,t;
    printf("请输入一个3*3的矩阵:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            t = a[0][0] + a[0][2] + a[2][0] + a[2][2];
    printf("矩阵的对角线元素之和为\n");
    printf("%d",t);
    return 0;
}
