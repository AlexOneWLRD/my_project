#include<stdio.h>

int main()
{
    long long int pin1,pin2;
    printf("login=");
    scanf("%lli",&pin1);
    printf("pin=");
    scanf("%lli",&pin2);

    if (((pin1==123456789)&&(pin2==987654321))||((pin1==11111111)&&(pin2==22222222)))
    {
        printf("OK");
    }
    else 
    {
        printf("ERROR");
    }
    
}
