/*Scrieți un program care interschimbă valorile 
a două variabile de tip întreg utilizând pointeri*/

#include <stdio.h>

void interschimbare ( int *a, int *b )
{
    int aux;
    aux = *a;
    *a = *b;
    *b = aux;

}
int main ( void )
{
    int a,b;
    printf("Introduceti valoarea pentru a: ");
    scanf("%d", &a);

    printf("Introduceti valoarea pentru b: ");
    scanf("%d", &b);

    printf("Valorile initiale: a = %d, b = %d\n", a, b);

    interschimbare(&a,&b);
    printf("Valorile dupa interschimbare: a = %d, b = %d\n", a, b);
    return 0;

}