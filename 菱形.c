#include <stdio.h>

int main()
{   int i,p;
    char b=' ';
 char a[]={"* * * * *"};
 for(i=1;i<=5;i++)
 {
 for(p=2;p<=i;p++){
  
 printf("%c",b);
}
 printf("%s\n",a);
}
return 0;
}
