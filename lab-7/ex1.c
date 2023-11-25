/*Se citesc două variabile, a și b, de tip întreg. Să se stocheze 
într-un pointer adresa variabilei care conține valoarea maximă și 
apoi să se afișeze valoarea pointată*/

#include <stdio.h>

int* maximul( int *a, int *b )
{
    if ( *a > *b )
        {
            return a;
        }
    else
        {
            return b;
        }

}
int main ( void )
{
    int a, b;
    
    printf("Introduceti valoarea pentru a: ");
    scanf("%d", &a);
    
    printf("Introduceti valoarea pentru b: ");
    scanf("%d", &b);

    int *maxi = maximul(&a,&b);
    printf("Valoare maxima este: %d\n ", *maxi);
    return 0;
}