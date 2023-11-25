/* Scrieti o functie recursiva care implementeaza sirul lui fibonacci, apoi printati 
numarul de apeluri recursive pentru fiecare numar folosind o un parametru dat prin 
adresa din main.*/

#include<stdio.h>

int nr;
int fibo( int n ) 
{   
    nr ++;
    if( n <= 1 )
        {
            return n;
        }
    else
    {
         return fibo( n - 1 ) + fibo( n - 2 );
    }
}
 int main ( void )
 {
    int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);
    printf("%d", fibo(n));
    printf("Numarul de aparitii %d", nr);
    return 0; 
 }