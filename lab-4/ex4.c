/*Să se scrie o funcție care pentru un număr n afișează 
pe ecran: x^n+x^n-1+...+x+1.De exemplu pentru 
n=3:   x^3+x^2+x+1.*/

#include<stdio.h>

void afisare ( int n )
{

    for ( int i = n; i >= 0; i-- )
    {
        if( i > 1 )
        {
            printf("x^%d+", i);
        }
        if( i == 1 )
        {
            printf("x+");
        }
        if( i == 0 )
        {
            printf("1");
        }
    }
}
int main ( void )
{

    int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);
    afisare(n);

    return 0;
}