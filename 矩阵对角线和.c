#include <stdio.h>

int main()
{
    int a[3][3];
    int i,j,t;
    printf("������һ��3*3�ľ���:\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            t = a[0][0] + a[0][2] + a[2][0] + a[2][2];
    printf("����ĶԽ���Ԫ��֮��Ϊ\n");
    printf("%d",t);
    return 0;
}
