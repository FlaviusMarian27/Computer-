/*
//1
#include<stdio.h>

void biti( unsigned int n )
{
  for ( int i = 7 ; i >= 0 ; i-- )
    {
      printf("%d", ((n>>i)&1));
    }
  printf("\n");
  printf("%u",n);
}

int main ( void )
{
  unsigned int n;
  n = 0;

  n |= (1<<0) | (1<<2) | (1<<3);
  n &= ~((1<<1) | (1<<5) | (1<<6) );
  n ^= (1<<4) | (1<<7);

  printf("Numarul final: ");
  biti(n);
  return 0;
}

//2

#include<stdio.h>
#include<stdint.h>

void afisare( int num )
{
  for ( int  i = 7 ;  i>= 0 ; i-- )
    {
      printf("%d", ( (num>>i)&1 ));
      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
   printf("\n");
}

void id(int x , int y )
{
  int imp = ((x<<4) | y);
  printf("Numere impachetate: %u\n",imp);

  printf("Numarul 1 in binar: ");
  afisare(x);

  printf("Numarul 2 in binar: ");
  afisare(y);

  printf("Numarul imapachetat: ");
  afisare(imp);

  int des1 = ( imp >> 4 );
  int des2 = ( imp & 0x0F);

  printf("Numarul 1: %u\n",des1);
  printf("Numarul 2: %u\n", des2);
}


  
int main ( void )
{
  int x , y ;
  printf("O valoare pentru x: ");
  scanf("%d",&x);

  printf("O valoare pentru y: ");
  scanf("%d",&y);

  id(x,y);
  return 0;
}

//3

#include<stdio.h>

void afisare (int numar)
{
  for ( int i = 7 ; i >= 0 ; i-- )
    {
      printf ("%d" , ((numar>>i)&1));
      if( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}


int main ( void )
{

  int x;

  printf("O valoare pentru x: ");
  scanf("%d",&x);

  afisare(x);
  
  return 0;
}

//4

#include<stdio.h>

void afisare( int numar )
{
  for ( int i = 7 ; i >= 0 ; i-- )
    {
      printf("%d", ((numar>>i)&1) );
      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

int parity ( int n )
{
  int c = 0;
  int m = 1 << 7;
  for ( int  i = 0 ; i < 8 ; i++)
    {
      if((n&m)!=0)
	{
	  c = c + 1;
	}
      m = m >> 1;
    }
  
  if  ( c % 2 == 0 )
    {
      return 0;
    }
  return 1;

}

int main ( void )
{

  int x;

  printf("O valoare pentru x: ");
  scanf("%d",&x);

  printf("X-ul binar: ");
  afisare(x);

  int r;
  r = parity(x);
  printf("parity: %d\n", r);
  return 0;
}


//5
#include<stdio.h>

int semn ( int n )
{
  int x ;
  x = (n >> (sizeof(int) * 8 - 1)) & 1;
  return x;
  
}
int main ( void )
{
  int num;
  printf("O valoare: ");
  scanf("%d",&num);

  int bds = semn ( num ) ;
  printf("Aici se afla bitul de semn: %d\n",bds);
  return 0;
}



//6


#include<stdio.h>

void afisare (int numar)
{
  for ( int i = 7 ; i >= 0 ; i-- )
    {
      printf ("%d" , ((numar>>i)&1));
      if( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

void suma ( int n )
{
  int s = 0;
  for ( int i = 0 ; i < n ; i++ )
    {
      if( i < 4 )
	      {
	        s = s + ((n>>i)&1);
	      }
    }

  printf("Suma primilor 4 biti: %d\n",s);
  
}

int main ( void )
{
  int n;

  printf("Valoare lui x: ");
  scanf("%d",&n);

  printf("n-ul binar: ");
  afisare(n);

  suma(n);
  return 0;
}

//7
#include<stdio.h>
#include<stdint.h>
void afisare (int numar)
{
  for ( int i = 7 ; i >= 0 ; i-- )
    {
      printf ("%d" , ((numar>>i)&1));
      if( i % 4 == 0 )
	      {
	        printf(" ");
	      } 
    }
  printf("\n");
}

unsigned int nr1 ( unsigned int n )
{
  int c = 0;
  uint32_t m = 1 << 31;

  for ( int i = 0 ; i <= (sizeof(int)*8 - 1); i++)
    {
      if ( (n&m) != 0 )
	        {
	          c++;
	        }
      m = m >> 1;
    }
  return c;
}

int main ( void )
{
  int n;

  printf("Valoare lui n: ");
  scanf("%d",&n);

  printf("n-ul binar: ");
  afisare(n);

  unsigned int r = nr1(n);
  printf("Numarul de biti de 1: %d\n", r);
  
  return 0;
}


//8

#include<stdio.h>
#include<stdint.h>
uint16_t nib ( uint16_t n )
{
  uint16_t n1 = ( n >> 0 ) & 0xF;
  uint16_t n2 = ( n >> 4 ) & 0xF;
  uint16_t n3 = ( n >> 8 ) & 0xF;
  uint16_t n4 = ( n >> 12 ) & 0xF;

  uint16_t r ;

  r = ( n4 << 0 ) | ( n3 << 4 ) | (n2 << 8) | (n3 << 12);

  return r;
}


int main ( void )
{
  int  n;

  printf("Introduceti un numar fara semn: ");
  scanf("%d",&n);
  uint16_t r;
  r = nib(n);
  printf("Numarul inversat: %u\n",r);
  return 0;
}

//9

#include<stdio.h>

void printbinary( unsigned n )
{
  for ( int i = sizeof(n) * 8 - 1; i >= 0; i-- )
    {
      printf("%d", (n>>i)&1 );

      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

unsigned setbits(unsigned x, int p, int n, unsigned y)
{
  for( int i = 0 ; i < n ; i++ )
    {
      unsigned lastBitY = y & 1;

      unsigned mask_x = ~(1 << (p-i));

      unsigned move_y = lastBitY << (p-i);

      x = (x & mask_x) | move_y;
    }
  return x;
}

int main ( void )
{

  unsigned x = 0b110110110;
  unsigned y = 0b101;

  int n = 3;
  int p = 5;

  unsigned result = setbits(x,p,n,y);

  printf("Original x: ");
  printbinary(x);
  printf("decimal: %u\n",x);

  printf("Original result: ");
  printbinary(result);
  printf("decimal: %u\n",result);
  return 0;
}

//10

#include<stdio.h>

void printbinary( unsigned n )
{
  for ( int i = sizeof(n) * 8 - 1; i >= 0; i-- )
    {
      printf("%d", (n>>i)&1 );

      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

unsigned invert(unsigned x, int p, int n)
{
  for( int i = p ; i > p - n ; i-- )
    {
      x = (x ^ (1<<i));
    }
  return x;
}

int main ( void )
{

  unsigned x = 0b110110110;
  
  int n = 3;
  int p = 5;

  unsigned r = invert(x,p,n);

  printf("Original x: ");
  printbinary(x);
  printf("decimal: %u\n",x);

  printf("Original r: ");
  printbinary(r);
  printf("decimal: %u\n",r);
  return 0;
}

//11

#include<stdio.h>

void printbinary( unsigned n )
{
  for ( int i = sizeof(n) * 8 - 1; i >= 0; i-- )
    {
      printf("%d", (n>>i)&1 );

      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

unsigned rightrot(unsigned x, int n)
{
  unsigned totalbits = sizeof(x) * 8;
  for( int i = 0 ; i < n ; i++ )
    {
      unsigned lastbit = x & 1;
      x = x >> 1;
      x = ( x | ( lastbit << ( totalbits - 1 ) ) );
    }
  return x;
}

int main ( void )
{

  unsigned x = 0b110110110;
  int n = 3;

  unsigned r = rightrot(x,n);

  printf("Original x: ");
  printbinary(x);
  printf("decimal: %u\n",x);

  printf("Original r: ");
  printbinary(r);
  printf("decimal: %u\n",r);
  return 0;
}

//12

#include<stdio.h>

void printbinary( unsigned n )
{
  for ( int i = sizeof(n) * 8 - 1; i >= 0; i-- )
    {
      printf("%d", (n>>i)&1 );

      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

unsigned leftrot(unsigned x, int n)
{
  unsigned totalbits = sizeof(x) * 8;
  for( int i = 0 ; i < n ; i++ )
    {
      unsigned firstbit = ( x >> (totalbits - 1));
      x = x << 1;
      x = ( x | firstbit );
    }
  return x;
}

int main ( void )
{

  unsigned x = 0b110110110;
  int n = 3;

  unsigned r = leftrot(x,n);

  printf("Original x: ");
  printbinary(x);
  printf("decimal: %u\n",x);

  printf("Original r: ");
  printbinary(r);
  printf("decimal: %u\n",r);
  return 0;
}

//13

#include<stdio.h>
#include<stdint.h>

void printbinary( unsigned n )
{
  for ( int i = sizeof(n) * 8 - 1; i >= 0; i-- )
    {
      printf("%d", (n>>i)&1 );

      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

uint32_t suma( uint32_t a , uint32_t b )
{
  int carry;

  while( b != 0 )
    {
      carry = a & b;
      a = a ^ b;
      b = carry << 1;
    }
  return a;
  
}
int main ( void )
{

  uint32_t a = 0b00110001;
  uint32_t b = 0b10101110;


  printf("Original a: ");
  printbinary(a);
  printf("decimal: %u\n",a);

  printf("Original b: ");
  printbinary(b);
  printf("decimal: %u\n",b);

  uint32_t s = suma(a,b);
  
  printf("Original s: ");
  printbinary(s);
  printf("decimal: %u\n",s);
  
  return 0;
}

//14

#include<stdio.h>
#include<stdint.h>

void printbinary( unsigned n )
{
  for ( int i = sizeof(n) * 8 - 1; i >= 0; i-- )
    {
      printf("%d", (n>>i)&1 );

      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}

uint32_t dif( uint32_t a , uint32_t b )
{
  int d = 0;

  b = ~b + 1;
  
  d = a + b;

  return d;
}

int main ( void )
{

  uint32_t a = 0b10101110;
  uint32_t b = 0b00110001;


  printf("Original a: ");
  printbinary(a);
  printf("decimal: %u\n",a);

  printf("Original b: ");
  printbinary(b);
  printf("decimal: %u\n",b);

  uint32_t d = dif(a,b);
  
  printf("Original d: ");
  printbinary(d);
  printf("decimal: %u\n",d);
  
  return 0;
}



//15

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>

void read_array_random( uint16_t *a, int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      a[i] = rand() % 100;
    }
}

void print_array( uint16_t *a, int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      printf("%d ", a[i]);
    }
  printf("\n");
}

void sort_array( uint16_t *a, int size )
{
  uint16_t aux = 0;
  for ( int i = 0 ; i < size ; i++ )
    {
      for ( int j = i ; j < size ; j++ )
	      {
	        if ( a[i] > a[j] )
	          {
	            aux = a[i];
	            a[i] = a[j];
	            a[j] = aux;
	          }
	      }
    }
}

uint16_t find_max(uint16_t *a, int size)
{
  uint16_t max = a[0];
  for( int i  = 0 ; i < size ; i++ )
    {
      if ( a[i] > max )
	      {
	        max = a[i];
	      }   
    }
  return max;
}

uint16_t find_min(uint16_t *a, int size)
{
  uint16_t min = a[0];

  for( int i = 0 ; i < size ; i++ )
    {
      if( a[i] < min )
	      {
	        min = a[i];
	      }
    }
  return min;
}

int main ( void )
{
  srand(time(NULL));

  int size = 10;
  uint16_t array[size];

  read_array_random( array , size);
  printf("Tabloul initial: ");
  print_array(array,size);

  sort_array( array , size );
  printf("Tabloul sortat: ");
  print_array( array , size );

  int maxim;
  maxim = find_max(array,size);
  printf("Valoarea maxima din array: %d\n",maxim);

  int minim;
  minim = find_min(array,size);
  printf("Valoarea minima din array: %d\n",minim);
  return 0;
}
*/