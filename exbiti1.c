/*Exercise 2-7. Write a function invert(x,p,n) that returns x with the n bits that begin at
position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.*/

#include<stdio.h>

void printbinary(unsigned n)
{
    for ( int i = sizeof(n) * 8 -1 ; i >= 0 ; i-- )
    {
        printf("%d", (n>>i) & 1);
        if ( i % 4 == 0 )
            {
                printf(" ");
            }
    }
    printf("\n");
}

unsigned invert( unsigned x , int p , int n )
{
    for ( int i = p ; i > p -n ; i-- )
        {
            x = ( x ^ (1 << i)); //Deci ca sa intelegem mergem cu un for de la poz p 5 in cazul nostru pana la p - n adica il vom lua pe 5,4 si 3
            // si dupa vom incepe sa negam acesti biti inversandu i 
        }
    return x;
}

int main ( void )
{
    unsigned x = 0b110110110;

    int p = 5;  // poziția de start a celor n biți în x
    int n = 3;  // numărul de biți

    unsigned result = invert(x, p, n);

    printf("Original x:     ");
    printbinary(x);
    printf(" (decimal: %u)\n", x);

    printf("Inverted x:     ");
    printbinary(result);
    printf(" (decimal: %u)\n", result);

    return 0;
}