/*Rescrieți funcția anterioară astfel încât numărul 
(nr) să fie pe o dimensiune de 64 de biți fără semn.*/

#include<stdio.h>
#include<stdint.h>

void afisare( uint64_t nr, uint8_t n, int p)
{
    if ( p < 0 || p > 7)
    {
        printf(" Valoarea pentru pozitii nu este corecta");
    }
    uint64_t m = 0xFF;
    uint64_t nou = (uint64_t) n << (p * 8);
    uint64_t masca_stergere = m << ( p * 8 );
    masca_stergere = ~masca_stergere;
    nr = ( nr & masca_stergere ) | nou;
    printf("Rezultat: %u\n", nr);
}
 
int main ( void )
{
    uint64_t nr = 911947355ull; 
    uint8_t n = 239;
    int p = 2;

    afisare(nr, n, p);
    return 0;
}