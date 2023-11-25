#include <stdio.h>
int main ( void )
{
EXERCITIUL 1
  int b= 11001111;
  int z = 0;
  int k = 1;
  int x= b;
  while (x)
    {
      int c = x%10;
      x=x/10;
      z= c* k;
      k= k * 2;
    }
    printf ("%d in baza 2 este echivalent cu %d in baza 10\n",b,z); 

  EXERCITIUL 2
  int a = 5, b = 1, c;
  c = --a - --b;
  printf("%d %d %d\n", a ,b ,c);
  c=--a + b--;
  printf("%d %d %d\n", a ,b ,c);
  c= a++ - b++;
  printf("%d %d %d\n", a ,b ,c); 

  EXERCITIUL 3
  int x;
  int y;
  int op;
  printf ("Alege un x= ");
  scanf("%d", &x);
  printf ("Alege un y= ");
  scanf("%d", &y);
  printf("Alege o operatie dintre 1,2,3 sau 4: ");
    scanf ( "%d", &op);
  if ( op == 1 )
    {
      if(x>=y)
	{
	  printf("max:%d\n", x);
	}
      else
	{
	  printf ("max:%d\n", y);
	}
    }
  if ( op == 2 )
    {
      if ( x <= y )
	{
	  printf(" min:%d\n", x);
	}
      else
	{
	  printf ( " min:%d\n ", y);
	}
    }
  if ( op == 3 )
    {
      printf(" %d\n ", x);
    }
  if( op == 4 )
    {
      printf( " %d\n " ,y);
    }

  EXERCITIUL 4 

  int n;
  
  while ( 1 )
    {
     printf("Pune un numar n: ");
      scanf ( "%d", &n);
      if ( n < 0 )
	{
	  printf("Eroare. Se cere un alt numar de preferat 0 sau mai mare decat zero:\n");
	  break;
	}
      if( n > 0 )
	{
	  if(n % 2 == 0 )
	    {
	      printf("Numarul n este unul par: %d\n ", n);
	      break;
	      
	    }
	  else
	    {
	      printf("Numarul n este unul impar: %d\n ", n);
	      break;
	    }
	}
      if( n == 0 )
	{
	  printf("Zero");
	  break;
	}
    }
    EXERCITIUL 5 
  int op;
  int  x=4, y=2;
  int a;
  printf("Calculator\n");
  printf("1-Adunare\n");
  printf("2-Scadere\n");
  printf("3-Inmultire\n");
  printf("4-Impartire\n");
  printf("5-Iesire\n");
  printf("Alege una dintre optiuni dintre 1,2,3,4 sau 5: ");
  scanf("%d", &op);
  while (op!=5)
    {
      if( op == 1)
	{
	  printf(" Introduce doua numere dorite: ");
	  scanf("%d %d", &x, &y);
	  a = x + y;
	  printf("%d + %d = %d\n",x,y,a);
	}
      if( op == 2)
	{
	  printf(" Introduce doua numere dorit: ");
	  scanf("%d %d", &x, &y);
	  a= x - y;
	  printf("%d - %d = %d\n ", x,y,a);
	}
      if( op == 3)
	{
	  printf(" Introduce doua numere dorite: ");
	  scanf("%d %d", &x, &y);
	  a= x * y;
	  printf("%d * %d = %d\n ", x,y,a);
	}
      if( op == 4)
	{
	  printf(" Introduce doua numere dorite: ");
	  scanf("%d %d", &x, &y);
	  if( y != 0)
	    {
	      a= x / y;
	      printf("%d / %d = %d\n ", x,y,a);
	    }
	  else
	    {
	      printf ("Eroare la impartire\n");
	    }
	}
      if( op==5)
	{
	  printf("Operatiune invalida");
	}
      printf ( " Introduce codul de operatie: ");
      scanf("%d", &op);
    }

    EXERCITIUL 6
  int x, y;
  printf("Introduce numarul dorit pentru x: ");
  scanf("%d" , &x);
  printf("Introduce numarul dorit pentru y: ");
   scanf("%d" , &y);

  if ( (x<0 && y<0) || (x>=0 && y>=0))
    {
      printf ( "Numerele au  acelasi semn\n");
    }
  else
    {
      printf ( "Numerele NU au acelasi semn\n ");
    }

    Exrcitiul 7 
  int x=0, y=0;
  int n;
  printf ( "Pune valoare lui n - > ");
    scanf( "%d", &n);
    for ( int i = n-1 ; i >= 0; i--)
      {
        if ( i % 2 == 1 )
	  {
	    if ( i > x)
	      {
		y =x;
		x=i;
	      }
	    else
	      if (i > y)
		{
		  y=i;
		}
	  }
	
      }
    if( x!=0 && y!=0 )
      {
	printf("acestea sunt numrele impare mai mici de cat %d si totodata maxime :%d %d\n", n, x, y);
      }
      EXERCITIUL 8 
  int n;
  printf ( "Pune o oarecare valoare a lui n fix aici - >");
    scanf ("%d", &n);
    
    if (( n % 4 == 0 && n%100!=0 ) || n % 400 == 0 )
	  {
	    printf ( " %d este un an bisect\n ", n);
	  }
    else
      {
	printf ( " %d nu este un an bisect\n ", n);
      }
      
      EXERCITIUL 9
  int  xm=0, yp=0;
  int  s=0;
  int  mere=5, pere=7;
  printf("Aici vei pune kg de mere: ");
  scanf("%d", &xm);
  printf("Aici vei pune kg de pere: ");
  scanf("%d", &yp);
  
 
  s= xm * mere + yp * pere;
  if(s<=20)
    {
      printf("Da. Avem fix %d kg:\n", s );
    }
  else
    {
      printf("Nu sunt destui bani\n");
    }

  EXERCITIUL 10 
  int x, y, z;
  printf("Aici pui valoarea pentru X  -> ");
  scanf("%d", &x);
  printf("Aici pui valoarea pentru Y  -> ");
  scanf("%d", &y);
  printf("Aici pui valoarea pentru Z -> ");
  scanf("%d", &z);

  if ( z>=x && z<y )
    {
      printf ( "Este adevarat ca %d apartine intervalului [ %d,%d ) \n ", z,x,y);
    }
  else
    {
      printf("Din pacate %d nu apartine intervalului [ %d,%d ) \n", z,x,y);
    }
  return 0;
}