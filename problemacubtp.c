#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX_ELEMENTS 10  // Dimensiunea maximă a tabloului

void populateArray(int array[], int size) {
    srand(time(NULL));  // Inițializare generator de numere aleatoare

    printf("Populating array with random numbers:\n");
    for (int i = 0; i < size; ++i) {
        array[i] = rand() % 100;  // Generare număr aleator între 0 și 99
        printf("%d ", array[i]);
    }
    printf("\n");
}

void readArray(int array[], int size) {
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; ++i) {
        if (scanf("%d", &array[i]) != 1) {
            printf("Invalid input. Please enter a valid integer.\n");
            exit(EXIT_FAILURE);
        }

        // Verificare limită superioară pentru evitarea buffer overflow
        if (i == MAX_ELEMENTS - 1) {
            printf("Error: Maximum number of elements exceeded.\n");
            exit(EXIT_FAILURE);
        }
    }
}

void printArray(int array[], int size) {
    printf("Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void bitwiseOperations(int array[], int size) 
{
    // Exemplu de operații pe biți
    printf("Performing bitwise operations:\n");
    for (int i = 0; i < size; ++i) 
    {
        array[i] = array[i] ^ 0xFF;  // Exemplu: inversare biți
    }
}

int main() {
    int array[MAX_ELEMENTS];

    // Populare tablou folosind numere aleatoare
    populateArray(array, MAX_ELEMENTS);

    // Citește elemente de la intrarea standard și le plasează în tablou
    readArray(array, MAX_ELEMENTS);

    // Afișare tablou după citire
    printArray(array, MAX_ELEMENTS);

    // Aplicare operații pe biți
    bitwiseOperations(array, MAX_ELEMENTS);

    // Afișare tablou după operații pe biți
    printArray(array, MAX_ELEMENTS);

    return 0;
}
