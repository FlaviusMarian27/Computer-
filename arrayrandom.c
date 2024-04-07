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
  for ( int i = 0 ; i < size - 1; i++ )
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
