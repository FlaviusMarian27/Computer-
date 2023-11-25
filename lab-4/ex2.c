/*Să se scrie o funcție care returnează maximul dintre 3 valori de tip intreg, primite ca parametri. 
Funcția nu va folosi nicio variabilă, cu excepția parametrilor săi. Se va testa funcția cu valori 
introduse de la tastatură. Citirea de la tastatura se va face in functia main*/

#include<stdio.h>

int maximul ( int a, int b, int c )
{
    if( a > b && a > c )
    {
        return a;
    }
    if( b > a && b > c )
    {
        return b;
    }
    if( c > a && c> b )
    {
        return c;
    }
}
int main ( void )
{
    int a,b,c;
    printf("Introduce o valoare pentru a: ");
    scanf("%d", &a);
    printf("Introduce o valoare pentru b: ");
    scanf("%d", &b);
    printf("Introduce o valoare pentru c: ");
    scanf("%d", &c);
    printf("%d", maximul(a,b,c));
    return 0;
}