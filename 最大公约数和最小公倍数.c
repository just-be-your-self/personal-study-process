#include<stdio.h>
int main()
{   
 int a,b,i,t,m,n;
 printf("����������������");
 scanf("%d %d",&a,&b);
 m=a;n=b;
 for(i=1;i<=a;i++)
 {
  if(a%i==0&&b%i==0)
     t=i;
 }
 printf("���Լ����%d\n",t);
 printf("��󹫱�����%d\n",m*n/t);
 return 0;
}  
