/*Se citește un număr k. Să se afișeze dacă în vectorul 
{7, -5, 4, 3, -9, 2, -8} există cel puțin un număr mai 
mare decat k.*/


#include<stdio.h>

void maimic( int n, int k)
{
    int v [ 1000 ];
    int i;
    for ( int i = 0; i < n; i++)
    { 
        scanf("%d", &v[i]);
    }

    int u = 0;
    for( int i = 0; i < n; i++)
    {
        if( v[i] > k)
        {
            u = u + 1;
        }
    }
    if ( u != 0)
        {
            printf("Exista fix %d valori mai mari de cat k:", u);
        }
    else
        {
            printf("Nu aveam valori mai mari decat k");
        }   

}
int main ( void )
{
    int n;
    printf(" O valoare pentru n ");
    scanf("%d", &n);
    int k;
    printf(" O valoare pentru k ");
    scanf("%d", &k);
    maimic(n,k);
    return 0;
}