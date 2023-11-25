#include <stdio.h>
int suma ( int n )
{
  int s=0;
  int i;
  for ( i = 1; i <= n; i++ )
    {
      s = s + i;
    }
  return s;
}
void afisare( int n )
{
  printf("1");
  for ( int i =2; i<=n; i++ )
    {
      printf("+%d", i);
    }
}

int main ( void )
{
  int n;
  printf("Introduce valoare lui n: ");
  scanf("%d", &n);
  if(n>1)
    {
      int s=suma(n);
      afisare(n);
      printf("=%d\n", s);
    }
  else
    {
      printf("Numarul introdus nu este mai mare decat 1.\n");
    }
  
  return 0;
}
