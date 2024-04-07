#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 1024

void read_array_random ( uint16_t  *a , int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      *(a+i) = rand() % 100;
    }
}

void print_array( uint16_t *a, int size )
{
  for ( int i = 0 ; i < size ; i++ )
    {
      printf("%d ", *(a+i));
    }
  printf("\n");
}

int parity ( uint16_t nr )
{
  uint16_t c =0;
  uint16_t m = 1 << 15;

  for ( int i = 0 ; i < 16 ; i++ )
    {
      if ( (nr&m) != 0 )
	      {
	        c = c + 1 ;
	      }
      m = m >> 1;
    }
  if ( c % 2 == 0 )
    {
      return 0 ;
    }
  return 1;
}

void inserare ( uint16_t *a , int *size )
{
  for ( int i = 0 ; i < *size  ; i++ )
    {
      if( parity(*(a+i)) == 1 )
	      {
	        if (*size >= SIZE - 1)
            {
                printf("Nu mai exista spatiu pentru inserare!\n");
                return;
            }
	        for ( int j = *size ; j > i ; j-- )
	          {
	            *(a+j+1) = *(a+j);
	          }
	        *(a+i+1) = (*(a+i))*2;
	        *size = *size + 1;
	        i++;
	      }
    }
}

void numarinbiti( uint16_t nr )
{
  for ( int i = 15 ; i >= 0 ; i-- )
    {
      printf("%d", ((nr>>i)&1));
      
      if ( i % 4 == 0 )
	      {
	        printf(" ");
	      }
    }

  printf("\n");
  
}

void rezultat ( uint16_t *a, int size )
{
  int k = 0;
  for ( int i = 0 ; i < size ; i++ )
    {
      if ( parity(*(a+i)) == 1 )
	      {
	        printf("%d - ", *(a+i));
	        numarinbiti(*(a+i));
	        k = k + 1;
	      }
    }

  if ( k == 0 )
    {
      printf("Nu am avut numere care sa aiba paritate impara pe biti, deci nu am putut sa inseram dublul");
    }
  else
    {
      printf("\n");
    }
    
}

int main ( void )
{
  srand ( time ( NULL ) );

  int size;

  printf("O valoare pentru size: ");
  scanf("%d",&size);

  if ( size > 10 )
    {
      printf("Ati depasit limita de valoari. Trebuie sa introduceti maxim 10 valori\n");
      return 0;
    }

  uint16_t array[SIZE];

  read_array_random(array,size);
  printf("Array-ul proiectat: ");
  print_array(array,size);

  rezultat(array,size);

  inserare(array,&size);
  printf("Array - ul inserart: ");
  print_array(array,size);

  return 0;
}

