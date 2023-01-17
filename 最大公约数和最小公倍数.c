#include<stdio.h>
int main()
{   
 int a,b,i,t,m,n;
 printf("请输入两个整数：");
 scanf("%d %d",&a,&b);
 m=a;n=b;
 for(i=1;i<=a;i++)
 {
  if(a%i==0&&b%i==0)
     t=i;
 }
 printf("最大公约数是%d\n",t);
 printf("最大公倍数是%d\n",m*n/t);
 return 0;
}  
