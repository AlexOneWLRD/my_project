#include<stdio.h>

int main()
{
    int i=0;
    int a=0;
    while (i<15)
    {
       printf("%i\n",i); 
       i=i+1;
    } 
    printf("Nechet\n");
    while (a<15)
    {
        if (a%3==0)
        {
            a=a+3;
        }
        printf("%i\n",a);
    }
    


}
