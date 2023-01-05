#include<stdio.h>
#include<string.h>


int zam_b()
{
    char str[100];
    gets(str);

    char s;
    printf("kakoi symvol?= ");
    scanf("%c",&s);

    int g=strlen(str);

    char buf1=str[0];
    str[0]=s;

    char buf2=str[g-1];
    str[g-1]=s;

    puts(str);

}


int main()
{
    zam_b();
    
    return 1;
}