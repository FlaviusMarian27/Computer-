/*Se citește un număr n<=10 și apoi n numere întregi. 
Se cere să se insereze după fiecare valoare din vectorul 
original pătratul ei.*/

#include<stdio.h>

void duplicare_patrat_nr( int n )
{
    if ( n > 10 )
        {
            printf("Valoare incorecta. Trebuie n <= 10");
        }
    else
        {
            int v [ 1000 ];
            for ( int i = 0; i < n; i++ )
                {
                    scanf("%d", &v[i]);
                }
            for ( int i = 0 ; i < n ; i++ )
                {   
                    int k = 0;
                    k = v[ i ];
                    n = n + 1;
                    for ( int j = n - 1  ;  j > i ; j-- )
                        {
                            v[ j ] = v[ j - 1 ];
                        }
                    v [ i + 1 ] = k * k; // daca pun v[i] = > 1 1 4 2 9 3
                    i++; 
                }
            for( int i = 0; i < n; i++)
                {
                    printf("%d ", v[i]);
                }
        }
}
int main ( void )
{
    int n;
    printf("Valoare pentru n: ");
    scanf("%d", &n);
    duplicare_patrat_nr(n);
    return 0;
}