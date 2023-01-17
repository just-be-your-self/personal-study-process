#include<stdio.h>

int main()
{
  int number,s,i;
  for(number=2;number<1000;number++)
  {
    s=0;
    
    for(i=1;i<number;i++)
    {
      if((number%i)==0)
      { 
        s=s+i;
      } 
    }
      
    if(s==number){
    	printf("%d ",number);
    	printf("\n");
    	printf("%d its factors are:",number);
    	for(i=1;i<number;i++)
	    {
		if((number%i)==0)
		{
			printf("%d",i);
		}
	}
	printf("\n");
	}
  }
	printf("\n");
	

	return 0;
}
    

