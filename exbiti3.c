/*Exercise 2-8. Write a function leftrot(x, n) that returns
   the value of the integer x rotated to the left by n positions.*/

#include<stdio.h>


void printbinary(unsigned n)
{
    for ( int i  = sizeof(n) * 8 - 1 ; i >= 0 ; i-- )
        {
            printf("%d", (n>>i) & 1);
            if( i % 4 == 0 )
                {
                    printf(" ");
                }
        }
    printf("\n");
}


unsigned leftrot(unsigned x, int n) 
{
    int numBits = sizeof(x) * 8; // nr maxim de biti la noi 32 in caz avem int n ul

    for (int i = 0; i < n; i++) 
    {
        unsigned firstBit = ( x >> ( numBits - 1 ) ) & 1; // PRIMUL BIT

        x = x << 1; // mergem spre stanga

        x = (x | firstBit ); //  // Setează primul bit în partea dreaptă a x
    }

    return x;
}


int main ( void )
{
    unsigned x = 0b110110110;
    int n = 3;

    unsigned result = leftrot(x, n);

    printf("Original x:      ");
    printbinary(x);
    printf(" (decimal: %u)\n", x);

    printf("Right-rotated x: ");
    printbinary(result);
    printf(" (decimal: %u)\n", result);

    return 0;
}