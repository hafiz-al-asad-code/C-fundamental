/*
       A
    A B
 A B C */
#include<stdio.h>
int main()
{
  int n, row, col;       
  printf("Enter n = ");
  scanf("%d", &n);
  
  for(row=1; row<=n; row++)
  {
    for(col=1; col<=n-row; col++)
    {
      printf(" ");
    }
    for(col=1; col<=row; col++)
    {
      printf("%c", col + 96);
    }
    printf("\n");
  }
}
