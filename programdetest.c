/*

#include<stdio.h>
#include<stdint.h>

int numar_segmente(unsigned int n)
{
    int numar_segmente = 0;
    int bit_anterior = n & 1;
   
    
    for (int i = 0; i < 32; i++)
      {
        int bit_curent = (n >> i) & 1;
	
        if (bit_curent != bit_anterior)
	        {
            numar_segmente++;
	        }

        bit_anterior = bit_curent;
      }

    return numar_segmente + 1;
}

int main(void) {
    unsigned int n = 0b000100;

    int rezultat = numar_segmente(n);
    printf("Numărul de segmente consecutive este: %d\n", rezultat);

    return 0;
}
*/

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
  printf("Rezultatul in format binar: ");
  
  print_binary(result);
  printf("Rezultatul in format zecimal: %u\n", result);
  return 0;
}