/*Să se citească de la tastatură două variabile de tip double (se citește cu %lf, nu cu %g!!!) 
și să se afișeze numele variabilei care se află la adresa cea mai mică de memorie utilizând pointeri.*/

#include <stdio.h>

void adresa ( double *a, double *b )
{
    if ( *a < *b )
        {
            printf("Primul numar se afla la adresa cea mai mica de memorie\n");
        }
    if ( *a > *b )
        {
            printf("Al doilea numar se afla la adresa cea mai mica de memorie");
        }
    if ( *a == *b)
        {
            printf("Ambele numere se afla la aceeasi adresa");
        }
}
int main ( void )
{
    double num1, num2;

    printf("Introduceti prima valoare (double): ");
    scanf("%lf", &num1);

    printf("Introduceti a doua valoare (double): ");
    scanf("%lf", &num2);

    adresa(&num1, &num2);
    return 0;
}