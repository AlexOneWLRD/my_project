#include<stdio.h>
#include<stdlib.h>

int zap_mas()
{
int mas [100];
int e;
 printf("kol ed=");
 scanf("%i",&e);

  for (int i=0; i<e; i++)
{
    mas[i]=rand()%100;
}
for (int i=0; i<e; i++)
{
    printf("%4i",mas[i]);
}
}


int main()
{
    zap_mas();

    printf("\n");

    zap_mas();

}