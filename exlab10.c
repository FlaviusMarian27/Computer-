#include<stdio.h>
#include<stdint.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>

#define SIZE 100


//1

int32_t add_numbers_string ( char *str )
{
  int s = 0 ;
  int k = 0 ;
  for ( int i = 0 ; i < strlen ( str ) ; i++ )
    {

      if ((i==0 || str[i-1] =='-') && isdigit(str[i]) )
	   {
	     k = strtol(str+i, NULL, 10 );
	     s = s - k;
	   }
      else
      if ( isdigit(str[i]) && ( i == 0 ||  !isdigit(str[i-1]) ) )
	{
	  k = strtol(str+i,NULL,10);
	  s = s + k;
	}
    }
  return s;
}


//2
uint32_t parity_bit( uint32_t n )
{
  int c = 0;
  uint32_t m = 1 << 31;
    for ( int i = 0 ; i < 32 ; i++)
      {
	if( (n&m) != 0 )
	  {
	    c++;
	  }
	m = m >> 1;
     }
    if ( c % 2 == 0 )
      {
	return 1;
      }
    else
      {
	return 0;
      }
}

void print_binary(uint32_t n) {
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


int main ( void )
{
 
  char str[SIZE];
  fgets(str,100,stdin);
  int32_t r = add_numbers_string(str);
  printf("Suma numerelor din string: %d\n",r);

  uint32_t n;

  printf("O valoare pentru n: ");
  scanf("%u",&n);
  printf("Paritatea este: %d\n", parity_bit(n));

  print_binary ( n );
  return 0;
}