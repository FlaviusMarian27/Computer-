/*Să se scrie o funcție care ia un număr fără semn n și returnează numărul de 
segmente de biți consecutivi egali. Exemplu: 000100 are 3 segmente: 000, 1, 00, 
deci programul va returna 3*/

#include<stdio.h>
#include<stdint.h>

int numar_egal_de_biti( unsigned int n )
{
    int k = 0;
    int exista_o_val_adv = 1;
    int bit_ant = n & 1;
    n = n >> 1;
    while ( n > 0 )
    {
        int bit_curent = n & 1;
        if( bit_curent == bit_ant )
            {
                exista_o_val_adv++;
            }
        else
            {
                k++;
                exista_o_val_adv = 1;
            }
        bit_ant = bit_curent;
        n = n >> 1;
    }
    
    return k;
}

int main ( void )
{
    unsigned int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);
    int r;
    r = numar_egal_de_biti(n);
    printf("%d", r);
    return 0;
}