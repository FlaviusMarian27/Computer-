/*
//8
#include<stdio.h>
void afisare_biti ( unsigned int n )
{
  for ( int i = 7 ; i >= 0 ; i-- )
    {
      printf("%hhd",( n >> i & 1));
    }
  printf("\n");
  printf("%u",n);
}
int main ( void )
{
  unsigned int n = 0;

  n |= (1<<0) | (1<<2) | (1<<3);

  n &= ~((1<<1) | (1<<5) | (1<<6));

  n ^= (1<<4) | (1<<7);

  printf("Numarul in baza 2: ");
  afisare_biti(n);
  
  return 0 ;
}


//9

#include<stdio.h>
#include<stdint.h>

void imp_desp ( int x , int y )
{
  char imp =  ( ( x << 4 ) | y );
  printf("Numere impachetate: %hhu\n",(unsigned char)imp);

  printf("Numarul 1 in binar: ");
  afisare(x);

  printf("Numarul 2 in binar: ");
  afisare(y);

  printf("Numar impachetat: ");
  afisare(imp);
  
  int des1 = ( imp >> 4 ) ;
  int des2 = ( imp & 0x0F) ;

  printf("Numarul 1: %d\n", des1);
  printf("Numarul 2: %d\n", des2);
}

void afisare ( int num )
{
  for( int i = 7 ; i >= 0 ; i-- )
    {
      printf("%d", (num>>i)&1);
      if ( i % 4 == 0 )
	{
	  printf(" ");
	}
    }
  printf("\n");
}


int main ( void )
{
  int x  ,y ;

  printf("O valoare pentru x: ");
  scanf("%d",&x);

  printf("O valoare pentru y: ");
  scanf("%d",&y);

  imp_desp(x,y);
  
  return 0;
}


//10

#include<stdio.h>
#include<stdint.h>

int semn( int num )
{
  int x;
  x = ( num >> (sizeof(int) * 8 - 1)) & 1;
  return x;
}


int main ( void )
{
  int num;
  printf("O valoare pentru num: ");
  scanf("%d", &num);

  int bds = semn(num);
  printf("Aici se afla bitul de semn: %d\n",bds);
  return 0 ;
}


//11

#include<stdio.h>
#include<stdint.h>

int suma ( int n )
{
  int s = 0;
  for ( int i = 0 ; i < n ; i++ )
    {
      if ( i < 4 )
	{
	  s = s + ((n >> i ) & 1 );
	}
    }
  return s;
}
int main ( void )
{
  int n ;
  printf ("O valoare pentru n: ");
  scanf("%d", &n);

  int r = suma(n);
  printf("Suma este: %d\n",r );
  return 0;
}


//13
#include<stdio.h>
#include<stdint.h>

unsigned int unu ( unsigned int n )
{
  int c = 0;
  uint32_t m = 1 << 31;
  while( m != 0 )
    {
      if ( (n&m) != 0)
	{
	  c = c + 1;
	}
      m = m >> 1;
    }

  return c;
}
int main ( void )
{

  uint32_t n;

  printf("O valoare pentru n: ");
  scanf("%u", &n);

  unsigned int r;
  r = unu(n);
  printf("Numarul de aparitii de 1 este: %d\n", r);
  return 0;
}



//14
//a

#include<stdio.h>
#include<stdint.h>

uint32_t nib( uint32_t n )
{
  uint32_t n1 = ( n >> 0 ) & 0xF;
  uint32_t n2 = ( n >> 4 ) & 0xF;
  uint32_t n3 = ( n >> 8 ) & 0xF
  ;
  uint32_t n4 = ( n >> 12 ) & 0xF;

  uint32_t r;
  r = ( n4 << 0 ) | ( n3 << 4 ) | ( n2 << 8 ) | ( n1 << 12 );

  return r;
}
int main ( void )
{
  uint32_t n;
  printf("Introduceti un numar fara semn: ");
  scanf("%u", &n);

  uint32_t r;
  r = nib(n);
  printf("Numarul inversat: %u\n",r);
  return 0;
}

//b??

#include <stdio.h>
#include <stdint.h>

uint32_t inv_nib(uint32_t n)
{
    uint32_t r;
    r = ((n & 0xF) << 12) | ((n & 0xF0) << 4) | ((n & 0xF00) >> 4) | ((n & 0xF000) >> 12);

    return r;
}

int main(void)
{
    uint32_t n;
    printf("Introduceti un numar fara semn: ");
    scanf("%u", &n);

    uint32_t r;
    r = inv_nib(n);
    printf("Numarul inversat: %u\n", r);
    return 0;
}

//15

#include<stdio.h>
#include<stdint.h>

int numar_egal_de_biti( unsigned int n )
{
    int k = 0;
    int bit_ant = n & 1;
    n = n >> 1;
    for ( int i = 0 ; i < 32 ; i++)
    {
        int bit_curent = n & 1;
        if( bit_curent == bit_ant )
            {
                k++;
            }
        
        bit_ant = bit_curent;
    }
    
    return k+1;
}

int main ( void )
{
    unsigned int n = 0b0101010;
    
    int r;
    r = numar_egal_de_biti(n);
    printf("%d\n", r);
    return 0;
}


//16

#include<stdio.h>
#include<stdint.h>

uint32_t adunare( uint32_t a, uint32_t b )
{
  int transport;
  while ( b != 0 )
    {
      transport = a & b;
      a = a ^ b;
      b = transport << 1;
    }
  
  return a;
}
int main ( void )
{
  uint32_t a;
  uint32_t b;
  
  printf("a: ");
  scanf("%u",&a);
  printf("b: ");
  scanf("%u",&b);

  uint32_t r = adunare(a,b);

  printf("Suma = %u\n",r);
  return 0;
}


//17

#include<stdio.h>
#include<stdint.h>

int diferenta ( int a , int b )
{
  int s = 0 ;
  b = ~b + 1;
  
  s = a + b;

  
  return s;
}
int main ( void )
{
  int a;
  int b;
  
  printf("a: ");
  scanf("%u",&a);
  printf("b: ");
  scanf("%u",&b);

  if ( a < b )
    {
      printf("a trebuie sa fie > decat b\n");
      return 0;
    }


  int def = diferenta(a,b);
  printf("Diferenta: %d\n", def);
  return 0;
}


//18
#include<stdio.h>
#include<stdint.h>


void print_binary(uint32_t n)
{
    for (int i = 31; i >= 0; i--)
      {
        printf("%d", (n >> i) & 1);

        if (i % 4 == 0)
	  {
            printf(" ");
	  }
      }
    printf("\n");
}
void afisare ( uint32_t nr, uint8_t n , int p )
{
  if ( p < 0 || p > 3 )
    {
      printf("Pozitia nu este intre  [0,3]");
      
    }
  uint32_t m = 0xFF;
  uint32_t nou = (uint32_t) n << ( p * 8 );
  uint32_t masca_stergere = m << ( p * 8 );

  masca_stergere = ~masca_stergere;
  nr = ( nr & masca_stergere ) | nou;
  printf("Rezultat: %u\n",nr);
  
  printf(" ");
    print_binary(nr);
}



int main ( void )
{
  uint32_t nr = 911947355;
  uint8_t n = 239;
  int p = 2;

    
  afisare(nr,n,p);
  
  return 0;
}


//20
#include<stdio.h>
#include<stdint.h>

void print_binary(uint16_t n)
{
    for (int i = 15; i >= 0; i--)
      {
        printf("%d", (n >> i) & 1);

        if (i % 4 == 0)
	  {
            printf(" ");
	  }
      }
    printf("\n");
}

uint16_t comb ( uint8_t n1, uint8_t n2 )
{
  uint16_t r = n2;
  r = r << 8;
  r = r | n1;
  return r;
}

int main ( void )
{
  uint8_t n1 = 0b11001011;
  uint8_t n2 = 0b01100111;

  uint16_t result = comb(n1, n2);
  printf("Rezultatul în format binar: ");
  
  print_binary(result);
  printf("Rezultatul în format zecimal: %u\n", result);
  return 0;
}

//21

#include<stdio.h>
#include<stdint.h>

void print_binary(uint32_t n)
{
    for (int i = 31; i >= 0; i--)
      {
        printf("%d", (n >> i) & 1);

        if (i % 4 == 0)
	  {
            printf(" ");
	  }
      }
    printf("\n");
}

uint32_t comb2( uint8_t n0, uint8_t n1, uint8_t n2, uint8_t n3 )
{
  uint32_t r;

  r = n3;
  
  r = (r << 8) | n2;
  r = (r << 8) | n1;
  r = (r << 8) | n0;
  
  return r;
}
int main ( void )
{
  uint8_t n0 = 0b00101101;
  uint8_t n1 = 0b10100011;
  uint8_t n2 = 0b00111100;
  uint8_t n3 = 0b11110000;

  uint32_t r = comb2(n0,n1,n2,n3);
  printf("Rezultatul în format binar: ");
  print_binary(r);
  printf("Rezultatul în format zecimal: %u\n", r);
  return 0;
}
*/

#include<stdio.h>
#include<stdint.h>

void print_binary(uint64_t n)
{
    for (int i = 63; i >= 0; i--)
      {
        printf("%ld", (n >> i) & 1);

        if (i % 4 == 0)
	  {
            printf(" ");
	  }
      }
    printf("\n");
}

uint64_t comb2( uint8_t n0, uint8_t n1, uint8_t n2, uint8_t n3, uint8_t n4, uint8_t n5, uint8_t n6, uint8_t n7 )
{
  uint64_t r;

  r = n7;
  r = (r << 8) | n6;
  r = (r << 8) | n5;
  r = (r << 8) | n4;
  r = (r << 8) | n3;
  r = (r << 8) | n2;
  r = (r << 8) | n1;
  r = (r << 8) | n0;
  
  return r;
}
int main ( void )
{
  uint8_t n0 = 0b00101101;
  uint8_t n1 = 0b10100011;
  uint8_t n2 = 0b00111100;
  uint8_t n3 = 0b11110000;
  uint8_t n4 = 0b10010010;
  uint8_t n5 = 0b01010111;
  uint8_t n6 = 0b01101111;
  uint8_t n7 = 0b11111000;

  
  uint64_t r = comb2(n0,n1,n2,n3,n4,n5,n6,n7);
  printf("Rezultatul în format binar: ");
  print_binary(r);
  printf("Rezultatul în format zecimal: %lu\n", r);
  return 0;
}
