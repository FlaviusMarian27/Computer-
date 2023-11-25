/*Să se scrie o funcție care primește ca argument un număr pe 
32 de biți fără semn (nr), un număr pe 8 biți fără semn (n) și 
o poziție (p). Funcția va returna numărul (nr) în care octetul 
de pe poziția p va fi inlocuit cu numărul n. Octeții se numără 
se la dreapta (cel mai puțin semnificativ, poziția 0) spre stanga
exemplu: nr = 0011 0110 0101 1011 0011 0110 0101 1011 = 911.947.35510,
n = 1110 1111 = 23910, p = 2 -> rezultat: 0010 0110 1110 1111 0011 
 0110 0101 1011
*/

#include<stdio.h>
#include<stdint.h>

void afisare( uint32_t nr, uint8_t n, int p)
{
    if( p < 0 || p > 3)
    {
        printf("Pozitia pe care ai ales-o nu este egala cu 0,  1, 2 sau 3");
    }
    uint32_t m = 0xFF;
    uint32_t nou = (uint32_t) n << (p * 8);
    uint32_t masca_stergere = m << ( p * 8 );
    masca_stergere = ~masca_stergere;
    nr = ( nr & masca_stergere ) | nou;
    printf("Rezultat: %u\n", nr);
}

int main ( void )
{
    uint32_t nr = 911947355;
    uint8_t n = 239;
    int p = 2;

    afisare(nr, n, p);
    return 0;
}