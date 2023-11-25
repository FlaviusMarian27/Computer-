/*Să se scrie o funcție care ia un număr fără semn n și returnează numărul 
de segmente de biți consecutivi egali. Exemplu: 000100 are 3 segmente: 
000, 1, 00, deci programul va returna 3*/

#include<stdio.h>
#include<stdint.h>

int numar_egal_de_biti( unsigned int n )
{
    int v[32];
    int k = 0;
    int exista_o_val_adv = 1;
    
    for (int i = 0; i < 32; i++) 
    {
        v[i] = n % 2;
        n = n >> 1;
    }

    for (int i = 0; i < 31; i++) 
    {
        if (v[i] == v[i+1]) 
        {
            exista_o_val_adv++;
        } 
        else 
        {
            k++;
            exista_o_val_adv = 1;
        }
    }

    return k;
}

int main ( void )
{
    unsigned int n;
    printf("O valoare pentru n: ");
    scanf("%u", &n);
    int r;
    r = numar_egal_de_biti(n);
    printf("%d", r);
    return 0;
}
