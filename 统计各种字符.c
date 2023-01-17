#include <stdio.h>
int main()
{
    int upp = 0, low = 0, digit = 0, space = 0, other = 0;
    char text[3][80];
    int i=0;
    int j=0;
    
    for ( i=0; i<3; i++)
    {
        printf("please input line %d:\n",i+1);
        gets(text[i]);
        
        for ( j=0; j<80 && text[i][j]!='\0'; j++)
        {
            if (text[i][j]>='A'&& text[i][j]<='Z')  
                upp++;
            else if (text[i][j]>='a' && text[i][j]<='z')  
                low++;
            else if (text[i][j]>='0' && text[i][j]<='9') 
                digit++;
            else if (text[i][j]==' ')  
                space++;
            else
                other++;  
        }
     }
    
     printf("\nupper case: %d\n", upp);
     printf("lower case: %d\n", low);
     printf("digit     : %d\n", digit);
     printf("space     : %d\n", space);
     printf("other     : %d\n", other);
 
    return 0;
}


