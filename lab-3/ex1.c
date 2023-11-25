#include<stdio.h>
void afisare( int n )
{
  while ( n >10 )
    {
      printf("%d ",n);
      n-=n/10;
    }
}
int main (void)
{
  int n;
  printf("Valoarea lui n: ");
  scanf("%d", &n);
  afisare(n);
  return 0;
}