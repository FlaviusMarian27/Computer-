#include<stdio.h>
#include<stdint.h>

uint32_t suma ( uint32_t a, uint32_t b )
{
    int carry;
    while ( b != 0 )
        {
            carry = a & b;
            a = a ^ b;
            b = carry << 1;
        }
    return a;
}

void afisare( uint32_t n)
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

int main ( void )
{
    uint32_t a = 0b00110001;
    uint32_t b = 0b10101110;

    uint32_t r = suma(a,b);

    printf("Valoare lui a zecimal: %d\n", a);
    printf("Valoare lui a binar ");
    afisare (a);

    printf("Valoare lui b zecimal: %d\n", b);
    printf("Valoare lui b binar ");
    afisare (b);

    printf("Valoare lui sumei zecimal: %d\n", r);
    printf("Valoare lui sumei binar ");
    afisare (r);
    return 0;
}