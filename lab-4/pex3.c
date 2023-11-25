/*Scrieti o functie recursiva care primeste ca paramteru un numar natural n si 
returneaza numarul format selectand doar cifrele pare ale acelui numar.*/

#include<stdio.h>

int nrpar ( int n )
{
    int nr = 0;
    int p = 1;
    while ( n != 0 )
    {
        if( ( n % 10) % 2 == 0 )
        {
            nr = nr + p * ( n % 10 );
            p = p * 10;
        }
        n = n / 10;
    }
    return nr;
}
int main ( void )
{
    int n;
    printf("O valoare pentru n nostru: ");
    scanf("%d", &n);
    printf("%d", nrpar(n));
    return 0;
}