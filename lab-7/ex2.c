/*Să se scrie un program care citește un număr n<10 iar apoi citește 2 vectori 
v1 și v2 de câte n elemente de tip int. Pentru citirea elementelor unui vector 
se folosește o funcție citire(v,n). Se va implementa o funcție egal(v1,v2,n), 
care testează dacă toate elementele din v1 sunt egale cu cele din v2 la poziții 
corespondente.*/
#include<stdio.h>

void citire ( int v[], int n)
{
    printf("introduce un numar de elemente pentru vector\n");
    for ( int i = 0 ; i < n ; i++)
        {
            printf("v[%d] = ", i);
            scanf("%d", &v[i]);
        }
}

int egal ( int v1[], int v2[], int n )
{
    for ( int i = 0 ; i < n ; i++ )
        {
            if ( v1[i] != v2[i])
                {
                    return 0;
                }
        }
    return 1;
}
int main ( void )
{
    int n;
    printf("Introduceti valoarea pentru n (n < 10): ");
    scanf("%d", &n);
    if ( n > 10 )
    {
        printf("Numarul de elemente %d este mai mare decat 10", n);
        return 0;
    }
    int v1[n], v2[n];

    printf("Citire vector v1:\n");
    citire(v1, n);

    printf("Citire vector v2:\n");
    citire(v2, n);

    if ( egal ( v1 , v2 , n ))
        {
            printf("Vectorii au elementele egale ");
        }
    else    
        {
            printf("Vectorii nu au toate elementele egale");
        }
    return 0;
}