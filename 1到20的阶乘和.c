# include <stdio.h>

int main()
{
    int n =4;
    int i ;
    int m = 1;
    int sum=0;
    
    for (i=1 ; i<=n; i++)
    {
        m = m * i;  
    }
      sum = sum +m;
    printf ("sum = %d\n", sum);
    
    return 0;
}
