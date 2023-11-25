/*Să se citească de la tastatură un număr n<=10 iar apoi n valori 
de tip int. Să se afișeze dacă toate valorile pozitive sunt pare.*/

#include<stdio.h>

void poz( int n )
{
    if( n >= 10)
    {
        printf("O valoare mai mica pentru n ");
        
    }
    else
    {
        int v [ 100 ];
            for ( int i = 0; i < n; i++)
                {
                    scanf("%d", &v[i]);
                }

        int k = 0;
            for( int i = 0; i < n; i++)
                {
                    if(v[i] > 0 && v[i] % 2 == 1)
                        {
                            k = k + 1;
                        }
                }
            if ( k != 0)
                {
                    printf("Am avut si valori impare");
                }
            else
                {
                    printf("doar valori pare");
                }
    }
    

}
int main ( void )
{
    int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);
    poz(n);
    return 0;
}