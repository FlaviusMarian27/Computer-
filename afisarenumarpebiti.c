#include<stdio.h>
#include<stdint.h>

int formare( int n)
{
    for ( int i = sizeof(int)*8-1 ; i >= 0 ; i--)
        {
            printf("%u", ((n>>i)&1));
            if ( i % 4 == 0 )
                {
                    printf(" ");
                }
        }
    printf("\n");
}
void afisare( uint8_t n )
{
    uint8_t m = 1 << 7;

    while( m != 0)
        {
            if ( (n&m) != 0 )
                {
                    printf("1");
                }
            else
                {   
                    printf("0");
                }

            m = m >> 1;
        }
    printf("\n");

}

int main ( void )
{
    int n;

    printf("n: ");
    scanf("%u",&n);

    formare(n);

    afisare(n);
    return 0;
}