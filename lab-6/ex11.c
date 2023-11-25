/*Se citește un număr n<=10 și apoi n numere întregi. 
Se cere să se șteargă toate duplicatele (ori de câte 
ori apar acestea) din vector, păstrându-se ordinea 
elementelor.*/

#include<stdio.h>

void duplicat( int n )
{
    if ( n > 10 )
        {
            printf("Alege o alta valoare pentru n <= 10 ");
        }
    else
        {
            int v [ 1000 ];
            for ( int i = 0 ; i < n ; i ++ )
                {
                    scanf("%d", &v[i]);
                }

            for ( int i = 0 ; i < n ; i++ )
                {
                    int k = 0 ;
                    k = v[i];
                    for ( int j = i + 1 ; j < n; j++ )
                        {
                            if ( k == v[ j ])
                                {
                                    for ( int x = j; x < n - 1 ; x++)
                                        {
                                            v[ x ] = v [x+1];
                                        }
                                    n--;
                                    j--;
                                }
                        }
                }
            printf("vectorul fara duplicat: ");
            for ( int i = 0 ; i < n ; i++ )
                {
                    printf( "%d " , v[i] );
                }
        }
}
int main ( void )
{
    int n;
    printf ( "O valoare pentru n: ");
    scanf("%d", &n);
    duplicat(n);
    return 0;
}