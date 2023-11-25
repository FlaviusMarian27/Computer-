// Se citeste un numar natural n > 0. Sa se afiseze suma divizorilor numarului sub forma div_1+div_2+...+div_n = S
#include<stdio.h>
int suma_div( int n )
{
    int d;
    int s=0;
    for( int d=1; d <= n; d++)
        {
            if ( n % d == 0)
                { 
                    s = s + d;
                }
        }
    return s;
}
/// @brief 
/// @param n 
void afisare( int n, int s )
{
    printf( "Numarul dorita: ");
    for ( int d=1; d <= n; d++ )
    {
        if ( n % d == 0 )
            {
                printf("%d", d);
                if( d != n )
                {
                    printf ("+");
                }
            }
    }
    printf(" = %d\n", s);
}
int main ( void )
{
    int n;
    printf( "O valoare pentru n: " );
    scanf("%d", &n);

    int s;
    s=suma_div(n);
    printf("%d", s);

    afisare(n,s);
    return 0;
}