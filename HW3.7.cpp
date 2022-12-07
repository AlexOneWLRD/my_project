#include<stdio.h>

int main()
{
    int i=1;
    int sum=0;
    for(;i<101;i=i+1)
    {
        sum=sum+i;
        printf("%i+",i);
    }
    printf("%i=%i",i,sum);
}
