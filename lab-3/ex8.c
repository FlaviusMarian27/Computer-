/*Se citeste un numar natural n > 0. 
Sa se afiseze suma cifrelor numarului 
sub forma cifra_1+cifra_2+....+cifra_n = S */
#include <stdio.h>

void sortare(int v[], int n)
{
    int i, j, aux;
    for (i = 0; i < n-1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (v[i] > v[j])
            {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

int suma(int n)
{
    int s = 0;
    while (n > 0)
    {
        s = s + n % 10;
        n = n / 10;
    }
    return s;
}

void afisare(int v[], int n)
{
    printf("Suma cifrelor = ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", v[i]);
        if (i < n - 1)
        {
            printf(" + ");
        }
    }
}

int main(void)
{
    int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);

    int v[10];
    int x = n;
    int nr_cif = 0;

    while (x > 0)
    {
        v[nr_cif] = x % 10;
        nr_cif++;
        x = x / 10;
    }

    sortare(v, nr_cif);

    afisare(v, nr_cif);

    int s = suma(n);
    printf(" = %d\n", s);

    return 0;
}