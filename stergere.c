#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 1024

void read_array_random ( uint16_t *a , int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      *(a+i) = rand() % 100;
    }
}

void print_array ( uint16_t *a, int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      printf("%d ", *(a+i) );
    }
  printf("\n");
}

int suma (uint16_t n )
{
  int s = 0;
  for ( int i = 0 ; i < 16 ; i++ )
    {
      if ( i < 4 )
	      {
	          s = s + ((n>>i)&1);
	      }
    }
  return s;
}

void delete ( uint16_t *a , int *size )
{
  for ( int i = 0 ; i < *size ; i++ )
    {
      if ( suma(*(a+i)) > 2 )
	      {
	        for ( int j = i + 1 ; j < *size ; j++ )
	          {
	            *(a+j-1) = *(a+j);
	          }
	        *size = *size - 1;
	        i = i - 1;
	      }
    }
}

void formarenrbinar( uint16_t n )
{
  for ( int i = 15 ; i >= 0 ; i-- )
    {
      printf("%d", ((n>>i)&1));
      if ( i % 4 == 0 )
	      {
	        printf(" ");
	      }
    }
  printf("\n");
}

void rezultat ( uint16_t *a , int size )
{
  int g = 0;
  for ( int i = 0 ; i < size ; i++ )
    {
      if ( suma(*(a+i)) > 2 )
	      {
	        printf("%d - ", *(a+i));
	        formarenrbinar(*(a+i));
	        g = g + 1;
  	    }
    }

  if ( g == 0 )
    {
      printf("Nu am avut numere care au suma ultimilor 4 biti mai mare decat 2\n");
    }
  else
    {
      printf("\n");
    }
}
int main ( void )
{
  int size;
  printf("O valoare pentru size: ");
  scanf("%d",&size);

  uint16_t array[SIZE];

  if ( size > 10 )
    {
      printf("Ati depasit limita de valoari. Trebuie sa introduceti maxim 10 valori\n");
      return 0;
    }


  
  read_array_random(array,size);
  printf("Array-ul proiectat: ");
  print_array(array,size);

  rezultat(array,size);

  delete(array,&size);
  printf("Array-ul cu stergeri: ");
  print_array(array,size);
  
  return 0;
}
