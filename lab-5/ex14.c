/*Un nibble este un grup de 4 biti. Să se scrie un program care primește un număr fără semn n și această funcție
a) returnează valoarea acestui număr cu ordinea inversă a nibble-urilor
b) returnează valoarea acestui număr cu biții din fiecare nibble în ordine inversă*/

#include<stdio.h>
#include<stdint.h>

uint32_t inv_nibble( uint32_t n )
{
    return ((n & 0xF) << 12) | ((n & 0xF00) >> 4) | ((n & 0xF0000) << 4) | ((n & 0xF000000) >> 12);
}

uint32_t inv_biti_nibble( uint32_t n )
{
    return ((n & 0xF) << 4) | ((n & 0xF0) >> 4) | ((n & 0xF00) << 4) | ((n & 0xF000) >> 4) | ((n & 0xF0000) << 4) | ((n & 0xF00000) >> 4) | ((n & 0xF000000) << 4) | ((n & 0xF0000000) >> 4);

}

int main ( void )
{
    /*uint32_t n;
    printf("Introduce un numar far semn: ");
    scanf("%u", &n);*/
    printf("Valoarea pentru inversarea nibble urilor: %u\n", inv_nibble( 0x1234 ) );
    printf("Valoarea pentru inversarea bitilor din nibble urilor: %u\n", inv_biti_nibble( 0x1234 ) );

    return 0;
}