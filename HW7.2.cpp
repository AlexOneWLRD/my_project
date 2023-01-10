#include<stdio.h>
#include<stdlib.h>

int zap_mas(int* mas, int e)
{

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
  int mas1[100];
  int e;
  printf("kol ed=");
  scanf("%i",&e);
  
  zap_mas(mas1,e);

  printf("\n");

  int mas2[100];
  int e2;
  printf("kol ed=");
  scanf("%i",&e2);

  zap_mas(mas2,e2);
}