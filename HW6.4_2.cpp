#include<stdio.h>
#include<string.h>

int main()
{
    char str[100];

    gets(str);


    
    for(char i=strlen(str);i>0;i--)
    {
      char buf=str[i-1];
      printf("%c",str[i-1]);
    }
}