#include<stdio.h>

int main()
{
    int a,sum;
    a=5;
    sum=0;
    while (a<15)
    {
        sum=sum+a;
        printf("%i+",a);
        a=a+1;
    }
    sum=sum+a;
    printf("%i=%i",a,sum);
}
  
