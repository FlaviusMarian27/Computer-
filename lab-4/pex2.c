/* Scrieti o functie recursiva care returneaza cea mai 
semnificativa cifra a unui numar natural scris in baza 10.*/

#include<stdio.h>

int cifrasemni ( int n )
{
    while( n > 9)
        {
            n = n / 10;
        }
    return n;
} 
int main ( void )
{
    int n;
    printf("Un numar pentru n: ");
    scanf("%d", &n);
    printf("Aceasta este cea mai semnificativa cifra a numarului %d este cifra %d", n, cifrasemni(n));
    return 0;
}