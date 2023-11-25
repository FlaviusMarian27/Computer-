/*Scrieți o funcție care primește ca parametri trei numere n, b și c, cu c în intervalul [0,b) 
și returnează de câte ori apare cifra c în numărul n, dacă acesta s-ar afișa în baza b.*/

#include<stdio.h>

int cifra ( int n, int b, int c )
{
    int k = 0;
    while( n > 0 )
        {
            if ( n % b == c )
                {
                    k = k + 1;
                }
            n = n / b;
        }
    return k;
}
int main ( void )
{
    int n, b ,c;
    printf("Numarul dorit: ");
    scanf("%d", &n);

    printf("Baza dorita: ");
    scanf("%d", &b);

    printf("Cifra dorita: ");
    scanf("%d", &c);

    int k = cifra(n, b, c);

    printf("Cifra %d apare de %d ori in numarul %d in baza %d.\n", c, k, n, b);

    return 0;
}