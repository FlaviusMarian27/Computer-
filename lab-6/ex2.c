/*Să se afișeze minimul elementelor din vectorul {7, -5, 4, 3, -9, 2, -8}.*/

#include<stdio.h>

void minimul( int n )
{
    int v[1000];
    for ( int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }

    int minim;
    minim = v [0];
    for( int i = 0; i< n; i++)
    {
        if( v[i] < minim)
        {
            minim = v[i];
        }
    }
    printf("%d", minim);
}
int main ( void )
{
    int n;
    printf("O valoare pentru n: ");
    scanf("%u", &n);
    minimul(n);
    return 0;
}