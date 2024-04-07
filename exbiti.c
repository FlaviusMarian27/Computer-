/*Exercise 2-6. Write a function setbits(x,p,n,y) that returns x with the n bits that begin at
position p set to the rightmost n bits of y, leaving the other bits unchanged.*/

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

unsigned setbits(unsigned x, int p, int n, unsigned y) 
{
    for (int i = 0; i < n; ++i) 
    {
        // Obține ultimul bit al lui y
        unsigned lastBitY = y & 1;

        // Setăm bitul în x la poziția p - i
        //  Prin `~(1 << (p - i))`, creăm o mască cu toți biții setați la 1, exceptând bitul la poziția p - i, care este setat la 0.
        unsigned mask_x = ~(1 << (p - i));

        // Cu `lastBitY << (p - i)`, mutăm ultimul bit al lui y la poziția corectă.
        unsigned mutare_ultimul_bit = lastBitY << (p - i);
        // Aplicăm apoi operația OR între această mască și x pentru a seta bitul la poziția dorită.
        x = (x & mask_x) | mutare_ultimul_bit;

        // Deplasează y cu un bit spre dreapta pentru a extrage următorul bit
        y = y >> 1;
    }

    return x;
}
int main(void) {
    unsigned x = 0b110110110;
    unsigned y = 0b101;

    int n = 3; // nr biti
    int p = 5; // poz de start a celor n biti in x

    unsigned result = setbits(x, p, n, y);

    printf("Original x:   ");
    printbinary(x);
    printf(" (decimal: %u)\n", x);

    printf("Modified x:   ");
    printbinary(result);
    printf(" (decimal: %u)\n", result);
    
    return 0;
}
