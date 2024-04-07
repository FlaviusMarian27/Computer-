
#include<stdio.h>
#include<stdint.h>
void afisare( unsigned n )
{
  for ( int i = sizeof(n)*8-1 ; i >=0 ; i-- )
    {
      printf("%d", (n>>i)&1);
      if( i % 4 == 0)
	{
	  printf(" ");
	}
    }
  printf("\n");
}

//1
unsigned leftrot( unsigned x , int n )
{
  for ( int i = 0 ; i < n ; i++ )
    {
      unsigned firstbit = ( x >> (sizeof(x)*8-1));
      x = x << 1;
      x = ( x | firstbit );
    }
  return x;
}

//2
unsigned rightrot( unsigned x, int n )
{
  for ( int i = 0 ; i < n ; i++ )
    {
      unsigned lastbit = x & 1;
      x = x >> 1;
      x = ( x | ( lastbit << ( sizeof(n)*8-1 ) ) ) ;
    }
  return x;
}

//3
unsigned invert( unsigned x, int p, int n )
{
  for ( int i = p ; i > p - n ; i-- )
    {
      x = (x ^ (1 << i) );
    }
  return x;
}

//4
unsigned setbits( unsigned x , int p , int n , unsigned y )
{
  for ( int i =  0 ; i < n ; i++ )
    {
      unsigned lastbitY = y & 1;

      unsigned mask_x = ~(1 << ( p - i ) );

      unsigned move_y = lastbitY << (p-i);

      x = (x & mask_x) | move_y;
    }
  return x;
}

//5
unsigned nr1 ( unsigned int n )
{
  int c = 0;
  uint32_t m = 1 << 31;
    for ( int i = 0 ; i < 32; i++ )
      {
	if ( (n&m) != 0 )
	  {
	    c++;
	  }
	m = m >> 1;
      }
  return c;
}

//6

void suma ( int n )
{
  int s = 0;
  for ( int i = 0 ; i < n ; i++ )
    {
      if ( i < 4 )
	{
	  s = s  + ((n>>i)&1);
	}
    }
  printf("Suma primilor 4 biti: %d\n",s);
}

//7
int semn ( int n )
{
  int x;
  int l = sizeof(int)*8-1;
  x = ( n >> l )&1;
  return x;
}

//8
int parity ( int n )
{
  int c = 0 ;
  int m = 1 << 7;
  for ( int i = 0 ; i < 8 ; i++ )
    {
      if ( (n&m) != 0)
	{
	  c = c + 1;
	}
      m = m >> 1;
    }
  if ( c % 2 == 0 )
    {
      return 0;
    }
  return 1;
  
}

//10
void id(int x , int y)
{
  int imp = ( (x<<4) | y );
 
  printf("Numerele impachetate: %u\n",imp);
  
  printf("Numarul 1 in binar x: ");
  afisare(x);

  printf("Numarul 2 in binar y: ");
  afisare(y);

  printf("Numarul impachetat: ");
  afisare(imp);

  int des1 = ( imp >> 4 );
  int des2 = ( imp & 0x0F);

  printf("Numarul 1: %u\n",des1);
  printf("Numarul 2: %u\n",des2);
}

//11
void biti(unsigned int n )
{
  for ( int i = 7 ; i >= 0 ; i-- )
    {
      printf("%d", ((n>>i)&1) );
    }
  printf("\n");
  printf("%u\n",n);
}

int main ( void )
{
  unsigned x = 0b110110110;
  int n = 3;

  //1
  unsigned l = leftrot(x,n);


  printf("Original x: ");
  afisare(x);
  printf("decimal: %u\n",x);

  printf("Original leftrot: ");
  afisare(l);
  printf("decimal: %u\n",l);

  //2
  unsigned r = rightrot(x,n);

  printf("Original rightrot: ");
  afisare(r);
  printf("decimal: %u\n",r);

  //3
  int p = 5;

  unsigned i = invert(x,p,n);
  printf("Original invert: ");
  afisare(i);
  printf("decimal: %u\n",i);

  //4
  unsigned y = 0b101;

  unsigned set = setbits(x,p,n,y);
  printf("Original setbits: ");
  afisare(set);
  printf("decimal: %u\n",set);

  //5

  int nrunu;

  printf("O valoare pentru n: ");
  scanf("%d",&nrunu);

  printf("n-ul binar: ");
  afisare(nrunu);

  unsigned unu = nr1(nrunu);

  printf("Numarul de biti de 1: %d\n",unu);

  //6
  int z;
  printf("O valoare pentru z: ");
  scanf("%d",&z);

  printf("z-ul binar: ");
  afisare(z);

  suma(z);

  //7
  int w;
  printf("O valoare pt w: ");
  scanf("%d",&w);
  int bitsemn = semn(w);
  printf("Aici se afla bitul de semn: %d\n",bitsemn);

  //8
  int t;
  printf("O valoare pentru parity: ");
  scanf("%d",&t);

  int par = parity(t);
  printf("Paritatea este: %d\n",par);

  //9
  int nr;

  printf("O valoare pentru numar pe biti: ");
  scanf("%d",&nr);

  afisare(nr);


  //10
  int nr1, nr2;
  printf("O valoare pentru nr1: ");
  scanf("%d",&nr1);

  printf("O valoare pentru nr2: ");
  scanf("%d",&nr2);

  id(nr1,nr2);


  //11
  unsigned int f;

  f = 0;

  f |= (1<<0) | (1<<2) | (1<<3);
  f &= ~( (1<<1) | (1<<5) | (1<<6)  );
  f ^= (1<<4) | (1<<7);

  printf("Numarul final: ");
  biti(f);
  
  return 0;
}


