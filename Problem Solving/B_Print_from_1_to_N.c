#include<stdio.h>

int display(int n)
{
  if(n == 1){
    return 1;
  }
  n--;
  display(n);
  printf("%d\n", n);
};

int main()
{
  int n;
  scanf("%d", &n);
  
  display(n+1);
}
