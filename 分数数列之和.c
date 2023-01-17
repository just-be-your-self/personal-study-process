#include<stdio.h>
int main()
{
    double n=2,m=1,Sn=0,t; 
    int i;
    for(i=1;i<=20;i++)
    {
        Sn=Sn+n/m;
        t=n;              
        n=m+n;            
        m=t;              
    }
    printf("求数列2/1，3/2，5/3，8/5，13/8，21/13……前20项的和\nSn=%.2f\n",Sn);
    return 0;
} 

