#include<stdio.h>
void afisare(int n)
{
  int i,j;
  for( i=1; i<=n; i++ )
    {
      for ( j=1; j<=n;j++)
	{
	  if( i==1 || j==1 || i==n || j==n )
	    {
	      printf("%c",'*');
	    }
	  else
	    {
	      printf("%c", ' ');
	    }
        }
      printf("\n");
	  
    }
  
}
int main (void)
{
  int n;
  printf ("Valoarea lui n: ");
  scanf("%d", &n);
  afisare(n);
  return 0;
}