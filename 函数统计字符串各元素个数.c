#include <stdio.h>
#include <string.h>

void count(char s[]); 
                        
int main()
{
    char str[20];
    printf("Please enter string: ");          
    gets(str);
    count(str);                              
    
	return 0;
    
}

void count(char s[])
{
    int n=strlen(s);
    int letter=0, num=0, space=0, other=0;
    int i;
    for (i=0; i<n; i++)
	{
        if ((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) letter++;
        else if (s[i]>='0'&&s[i]<='9') num++;
        else if (s[i]==' '||s[i]=='\t') space++;
        else other++;
    }
    printf("Letter=%d, Number=%d, Space=%d, Ohter=%d\n", letter, num, space, other);
}
