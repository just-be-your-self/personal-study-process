# include<stdio.h>

int swap(int a[],int n);

int main()

{

int i;
int a[10];

printf("������10������:\n");
for (i=0;i<10;i++)

{

scanf("%d",&a[i]); 

}

printf("\n");

printf("��10������Ϊ:\n");

for (i=0;i<10;i++) 

printf("%5d",a[i]); 

printf("\n"); 

swap(a,10);

printf("�ź��������Ϊ��\n");
for(i=0;i<10;i++)
{
	printf("%5d",a[i]);
}
return 0;
}

int swap(int a[],int n)
{
	int temp,min,i,j;
for (i=0;i<10;i++)
{
 min=i;

for(j=i+1;j<10;j++)

if (a[min]>a[j]) min=j;

temp=a[i]; 

a[i]=a[min];

a[min]=temp;

}
}





