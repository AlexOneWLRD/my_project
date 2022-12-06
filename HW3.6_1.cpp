#include<stdio.h>

int main()
{
    int a=2;
    while(a!=7)
    {
        scanf("%i",&a);
        if(a>7)
        {
            printf("bolshe\n");
        }
        else
        {
            if(a<7)
            {
                printf("menshe\n");
            } 
        }
         if(a>10)
        {
            printf("bolshe 10\n");
        }
        else
        {
            if(a<10)
            {
                printf("menshe 10\n");
            } 
        }
         if(a%2)
        {
            printf("ne delitsya na 2\n");
        }
        else
        {
            printf("delitsya na 2\n"); 
        }
         if(a%3)
        {
            printf("ne delitsya na 3\n");
        }
        else
        {
            printf("delitsya na 3\n"); 
        }
    }
    printf("SUPER");
}