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

  for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        mas[i][j]=rand()%10;
    }
  }

   for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        printf("%3i",mas[i][j]);
    }
    printf("\n\n");
  }

for(int j=0;j<m-1;j++)
{
for(int t=0;t<n;t++)
{
  for(int i=0;i<n;i++)
  {
    if(mas[i][j]>mas[i][j+1])
    {
        int q=mas[i][j];
        mas[i][j]=mas[i][j+1];
        mas[i][j+1]=q;
    }
  }
}
}

   printf("\n\n\n\n");
   for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        printf("%3i",mas[i][j]);
    }
    printf("\n\n");
  }

  for(int i=0;i<m;i++)
{
  int q=mas[i][0];
  mas[i][0]=mas[i][n-1];
  mas[i][n-1]=q;
}

   printf("\n\n\n\n");
   for(int i=0;i<n;i++)
  {
    for(int j=0;j<m;j++)
    {
        printf("%3i",mas[i][j]);
    }
    printf("\n\n");
  }
}