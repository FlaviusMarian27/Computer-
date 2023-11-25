/*Se citesc n<=10 valori întregi. Folosind doar pointeri, fără niciun fel de indexare, 
să se afișeze toate valorile care au cel puțin un duplicat. (Inclusiv citirea se va face cu pointeri.)*/

#include <stdio.h>

void citire(int *a, int n) 
{
    printf("Introduceti %d valori:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", (a + i));
    }
}

void afiseazaDuplicat(int *a, int n) 
{
    printf("Valorile care au cel putin un duplicat sunt: ");
    for (int i = 0; i < n; i++) 
    {
        int k = 0;

        for (int j = i + 1; j < n; j++) 
        {
            if (*(a + i) == *(a + j)) 
            {
                k = 1;
                break;
            }
        }

        if (k) 
        {
            printf("%d ", *(a + i));
        }
    }
    printf("\n");
}

int main(void) 
{
    int n;

    printf("Introduceti numarul de valori (n <= 10): ");
    scanf("%d", &n);

    if (n <= 10 && n > 0) 
    {
        int tab[n];
        int *a = tab;

        citire(a, n);
        afiseazaDuplicat(a, n);
    } else 
    {
        printf("Numarul nu respecta conditia.\n");
    }

    return 0;
}
