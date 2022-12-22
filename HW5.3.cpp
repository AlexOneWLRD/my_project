#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int mas[100][100];

    int n,m;

    printf("n=");
    scanf("%i",&n);

    printf("m=");
    scanf("%i",&m);

    srand(time(NULL));

   for(int j=0;j<n;j++)
   {
    for(int i=0;i<m;i++)
    {
        mas[j][i]=rand()%10+(-2);
    }
    }
     for(int j=0;j<n;j++)
   {
    for(int i=0;i<m;i++)
    {
        printf("%10i",mas[j][i]);
    }
    printf("\n\n");
    }
}