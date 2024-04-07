#include<stdio.h>
#include<stdint.h>

void afisarept32 ( uint32_t n )
{
    for ( int i = 31 ; i >= 0 ; i-- )
        {
            printf("%d", (n>>i)&1);
            if ( i % 4 == 0)
                {
                    printf(" ");
                }
        }
    printf("\n");

}

void afisarept8 ( uint8_t n )
{
    for ( int i = 7 ; i >= 0 ; i-- )
        {
            printf("%d", (n>>i)&1);
            if ( i % 4 == 0)
                {
                    printf(" ");
                }
        }
    printf("\n");

}

uint32_t schimb( uint32_t nr, uint8_t n, int p )
{
    if ( p < 0 || p > 3 )
        {
            printf("p trebuie sa fie intre 0 si 3");
            return 0;
        }

    uint32_t mask = 0xFF << ( p * 8 );

    nr &= ~mask;

    nr = ( nr | ( n << (p*8) ) );

    return nr;
}

int main ( void )
{
    uint32_t nr = 0b00110110010110110011011001011011;  // 911.947.35510
    uint8_t n = 0b11101111;  // 23910
    int p = 2;
    
    printf("Numarul nr: ");
    afisarept32(nr);

    printf("Numarul n: ");
    afisarept8(n);

    uint32_t r;
    r = schimb(nr,n,p);

    printf("Numarul binar final: ");
    afisarept32(r);

    return 0;
}