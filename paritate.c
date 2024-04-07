#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 1024

void read_random_array( uint16_t *a, int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      *(a+i) = rand() % 100;
    }
}

void print_array ( uint16_t *a , int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      printf("%d ", *(a+i));
    }
  printf("\n");
}

int parity ( uint16_t n )
{
  int c = 0;
  int m = 1 << 15;
  for( int i = 0 ; i < 16 ; i++ )
    {
      if ( (n&m) != 0 )
	    {
	      c++;
	    }
      m = m >> 1;
    }

  if ( c%2 == 0)
    {
      return 0;
    }
  return 1;
}

void numarpebiti( uint16_t n )
{
  printf(" - ");
  for ( int i = 15; i >= 0 ; i-- )
    {
      printf("%d" , ((n>>i)&1));

      if ( i % 4 == 0 )
	      {
	        printf(" ");
	      }
	 
    }
  printf("\n");
}

void verificare ( uint16_t *a, int size )
{
  int g = 0;
  for ( int i = 0 ; i < size ; i++ )
    {
    
      if( *(a+i) % 2 == 0 && parity(*(a+i)) == 0 )
	        {
	            printf("%d ", *(a+i));
	            numarpebiti(*(a+i));
	            g++;
	        }	
    }
  printf("\n");
  if ( g == 0 )
    {
      printf("Nu au existat numere care sa respecte conditia\n");
    }
}


int main ( void )
{
  srand ( time ( NULL ) );

  int size;

  printf("O valoare pentru dimensiune: ");
  scanf("%d",&size);
  
  if ( size > 10 )
    {
      printf("Dimensiunea maxima este cea de 10 nu mai mult!\n");
      return 0;
    }

  uint16_t array[SIZE];
  read_random_array(array,size);
  printf("Array generat: ");
  print_array(array,size);

  verificare(array,size);
  return 0;
}
