#include<stdio.h>

int main()
{
    int i=0;
    int n;
    int sum=0;
    int srf=0;
    int max=0;
    int min=0;
    printf("сколько чисел ты хочешь ввести =");
    scanf("%i",&n);
    n=n+1;
 for(int a=1;a<n;a++)
 {
    printf("%i.введи число=",a);
    scanf("%i",&i);
    sum=sum+i;
   if (a==1)
   {
    min=max=i;
   }
   else
   if (i>max)
   {
    max=i;
   }
   else
   if (i<min)
   {
    min=i;
   }    
 }

 n=n-1;
 srf=sum/n;
 printf("\n\n");
 printf("максимально число=%i\n",max);
 printf("минимальное число=%i\n",min);
 printf("сумма чисел=%i\n",sum);
 printf("среднее ариф=%i\n",srf);

}
