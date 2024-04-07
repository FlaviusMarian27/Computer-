#include <stdio.h>

// Funcția care setează toți biții cu valoarea 1 pentru fiecare număr
void setAllBits(int array[], int size) {
    for (int i = 0; i < size; ++i) {
        array[i] = ~0;  // Setează toți biții cu valoarea 1
    }
}

// Funcția care calculează suma numerelor cu cel puțin un bit setat la 1
int sumNumbersWithSetBits(int array[], int size) {
    int sum = 0;

    for (int i = 0; i < size; ++i) {
        if (array[i] & (array[i] - 1) != 0) {
            // Verifică dacă cel puțin un bit este setat la 1
            sum += array[i];
        }
    }

    return sum;
}

int main() {
    int numbers[] = {5, 10, 3, 8, 12};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Tabloul initial: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    setAllBits(numbers, size);

    printf("Tabloul dupa setarea biților: ");
    for (int i = 0; i < size; ++i) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    int sumResult = sumNumbersWithSetBits(numbers, size);

    printf("Suma numerelor cu cel puțin un bit setat la 1: %d\n", sumResult);

    return 0;
}
