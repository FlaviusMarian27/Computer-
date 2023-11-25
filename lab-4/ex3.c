/* Să se scrie o funcție care primește ca parametru o cifră și afișează cifra astfel: 
dacă este în intervalul [0,9] o afișează direct, altfel afișează A pentru 10, B pentru 11, 
... până la 15 inclusiv.*/

#include<stdio.h>

void afisare ( int  c )
{

    if ( c >= 0  && c <= 9 )
        {
            printf("%d\n", c );
        }
    if ( c >= 10 && c <= 15 )
        {
            printf("%c", 'A' + c - 10 );
        }
    if( c > 15)
        {
            printf("Valoarea %d nu se regaseste in intervalul cerut\n", c);
        }
}
int main ( void )
{
    int c;
    printf("O valoare: ");
    scanf("%d", &c);
    afisare(c);
    return 0;
}