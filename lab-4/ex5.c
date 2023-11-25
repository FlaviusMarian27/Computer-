/*Scrieți o funcție care primește 3 parametri de 
tip float și îi afișează în ordine descrescătoare*/

#include<stdio.h>

void afiseaza( float a, float b, float c )
{
    if ( a > b && a > c && b > c )
    {
        printf("%.2f, %.2f, %.2f\n", a, b, c);
    }
    if ( a > b && a > c && c > b )
    {
        printf("%.2f, %.2f, %.2f\n", a, c, b);
    }
    if ( b > a && b > c && a > c )
    {
        printf("%.2f, %.2f, %.2f\n", b, a, c);
    }
    if ( b > a && b > c && c > a )
    {
        printf("%.2f, %.2f, %.2f\n", b, c, a);
    }
    if ( c > a && c > b && b > a )
    {
        printf("%.2f, %.2f, %.2f\n", c, b, a);
    }
    if ( c > a && c > b && a > b )
    {
        printf("%.2f, %.2f, %.2f\n", c, a, b);
    }
}
int main ( void )
{
    float a,b,c;
    printf("O valoare pentru a: ");
    scanf("%f", &a);
    printf("O valoare pentru b: ");
    scanf("%f", &b);
    printf("O valoare pentru c: ");
    scanf("%f", &c);

    afiseaza ( a, b, c );
    return 0;
}