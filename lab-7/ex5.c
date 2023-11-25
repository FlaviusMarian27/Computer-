/*Să se afișeze câte elemente negative sunt în vectorul {7, -5, 4, 3, -9, 2, -8} 
utilizând pointeri, fără indecși. (Fără indecși înseamnă că în cod nu va exista 
niciun v[i])*/

#include<stdio.h>

void afiseazaNegative(int *ptr) 
{
    if (*ptr != '\0') 
    {
        if (*ptr < 0) 
        {
            printf("%d ", *ptr);
        }
        afiseazaNegative(ptr + 1);  
    }
}

void elem_neg(int *a, int n)
{
    int k = 0;
    printf("Elemente negative: ");
    afiseazaNegative(a);

    for (int i = 0; i < n; i++) 
    {
        if (*(a + i) < 0) 
        {
            k++;
        }
    }
    
    printf("\nAtatea elemente negative sunt: %d\n", k);
}

int main(void)
{
    int vector[] = {7, -5, 4, 3, -9, 2, -8};
    int *ptr = vector;

    elem_neg(ptr, sizeof(vector) / sizeof(vector[0]));
    return 0;
}
