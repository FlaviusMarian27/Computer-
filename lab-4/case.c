#include<stdio.h>

int read_value ( void )
{
  int n;
  printf("O valoare anume: ");
  scanf("%d", &n);
  return n;
}
int operator(void)
{
  int op;
  printf("1) Maximul dintre x si y\n");
  printf("2) Minimul dintre x si y\n");
  printf("3) Valoare pentru x\n");
  printf("4) Valoare pentru y\n");
  printf("5) Suma dintre x si y\n");
  printf("6) Diferenta dintre x si y\n");
  printf("7) Inmultirea dintre x si y\n");
  printf("8) Float pentru x/y\n ");
  scanf("%d", &op);
  return op;
}

int maximul( int x, int y ) //1
{
  if ( x > y )
    {
      return x;
    }
  else
    {
      return y;
    }
}

int minimul ( int x, int y ) //2
{
  if( x < y )
    {
      return x;
    }
  else
    {
      return y;
    }
}

int xul ( int x ) //3
{
  return x;
}

int yul ( int y ) //4
{
  return y;
}

int suma ( int x, int y ) //5
{
  return x + y;
}

int diferenta ( int x, int y ) //6
{
  return x > y ? x - y : y - x;
}

int produs ( int x, int y )//7
{
  return x * y;
}

int floa( int x, int y)
{
  float p;
  p = (float) x / y;
  printf("%f\n", p);
  return p;
}

int main ( void )
{
  int x, y;
  int op;
  int maxi, mini;
  char t;
  do
  {
    x = read_value();
    y = read_value();
    op = operator();
  
    switch ( op )
      {
      case 1:
	{
	  maxi = maximul(x,y);
	  printf("Valoarea maxima este %d\n", maxi);
	  break;
	}
      case 2:
	{
	  mini = minimul(x,y);
	  printf("Valoarea minima este %d\n", mini);
	  break;
	}
      case 3:
	{
	  int x1;
	  x1 = xul ( x );
	  printf (" Valoarea lui x este aceasta: %d\n", x1);
	  break;
	}
      case 4:
	{
	  int y1;
	  y1 = yul ( y );
	  printf("Valoarea lui y este aceasta: %d", y1);
	  break;
	}
      case 5:
	{
	  int s;
	  s = suma ( x, y );
	  printf("Aceasta este valoarea pentru suma dintre x si y: %d\n", s);
	  break;
	}
      case 6:
	{
	  int d;
	  d = diferenta ( x, y );
	  printf("Aici este valoarea pentru diferenta dintre x si y:%d\n", d);
	  break;
	}
      case 7:
	{
	  int i;
	  i = produs( x, y );
	  printf("Acesta este produsul dintre x si y: %d\n", i);
	  break;
	}
      case 8:
	{
	  floa( x, y );
	  break;
	}
      default:
	{
	  printf("Optiniune de negasit\n");
	  break;
	}
      }
  }while( t == 'd' || t == 'D' );
  
  return 0;
}