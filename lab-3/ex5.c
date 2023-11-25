// Se citesc două numere întregi n și m, cu m>0 și n>m. Să se afișeze n numere care cresc de la 0 din 1 în 1 și dacă trec de m redevin 0, ciclul repetându-se. Exemplu pentru n==14 și m==3: 0 1 2 3 0 1 2 3 0 1 2 3 0 1
#include<stdio.h>
void afisare( int n, int m )
{
    int i, k;
    for( i=0; i<n ; i++ )
    {   
        k= i%(m+1);
        printf ( "%d ",  k);   
    }
}
int main(void)
{
    int n,m;
    printf("Valoarea lui n: ");
    scanf("%d", &n);
    printf("Valoarea lui m: ");
    scanf("%d", &m);
    if( m > 0 && n > m)
    {
        afisare(n,m);
    }
    else
    {
        printf("None");
    }
    return 0;
}