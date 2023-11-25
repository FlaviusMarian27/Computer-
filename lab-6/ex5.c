/*Se citesc 2 numere x și y cu x<y. Să se afișeze minimul 
elementelor din vectorul {7, -5, 4, 3, -9, 2, -8}, 
care se află în același timp și în intervalul [x,y].*/

#include<stdio.h>

void interval ( int n, int x, int y)
{
    if ( x > y)
        {
            printf("X trebuie sa fie mai mic decat y");
        }
    else
        {
            int v [ 1000 ];
            for( int i = 0; i < n; i++)
                {
                    scanf("%d", &v[i]);
                }
            
            int minim = v[0];
            for( int i = 0 ; i < n ; i++)
                {
                    if ( v[i] < minim )
                        {
                            minim = v[i];
                        }
                }
        if ( minim >= x && minim <= y )
            {
                printf("Valoarea minima %d se afla in intervalul [ %d, %d ]", minim, x, y);
            }
        else
            {
                printf("Nu apartine intervalului valoarea minima %d", minim);
            }
        }
}
int main ( void )
{
    int n;
    printf(" O valoare pentru n ");
    scanf("%d", &n);
    int x;
    printf(" O valoare pentru x ");
    scanf("%d", &x);
    int y;
    printf(" O valoare pentru y ");
    scanf("%d", &y);
    interval(n,x,y); 
    return 0;
}