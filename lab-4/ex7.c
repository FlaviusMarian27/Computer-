/*Dacă numărul p este prim și numărul a nu este divizibil cu p, 
secvența a, a^2, a^3, .. , a^n devine 1 când este calculată modulo p. 
Scrieți o funcție care primește p și a, (numerele respectă condiția, nu este nevoie de verificare) 
și returnează cel mai mic n pentru care șirul devine 1.
De exemplu pentru p = 7, a = 4 => n = 3    
sau pentru p = 11, a = 25 => n = 5*/

#include<stdio.h>

int cauta( int p, int a )
{
    int n = 1;
    int r = a % p;
    while( r != 1 )
        {
            r = ( r * a ) % p;
            n++;
        }
    return n;
}
int main ( void )
{
    int p, a;
    printf("Un p: ");
    scanf("%d", &p);
    printf("un a: ");
    scanf("%d", &a);

    int r = cauta(p,a);
    printf("Cel mai mic n pentru care a^n %% p = 1 este: %d\n", r);
    return 0;
}