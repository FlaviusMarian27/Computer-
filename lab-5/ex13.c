/*Scrieţi o funcție care ia ca parametru un întreg 
fără semn şi returnează numărul de biţi de 1 din 
reprezentarea sa.*/

#include<stdio.h>
#include<stdint.h>

int nr_bit_1( uint32_t n )
{
    int c = 0;
    uint32_t m = 1 << 31;
    while( m != 0 )
        {
            if( ( n & m ) != 0 )
                {
                    c++;
                }
            m = m >>1;
        }
    return c;
}

int main ( void )
{
    uint32_t n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);
    int r;
    r = nr_bit_1(n); // 0b10001110 = 142
    printf("Numarul este: %d\n", r);
    return 0;
}