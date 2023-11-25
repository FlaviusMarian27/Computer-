/*Se citește un număr n<=10 și apoi n numere întregi, inclusiv negative. 
Se cere să se sorteze aceste numere astfel încât numerele pozitive să fie 
înaintea celorlalte numere*/

#include <stdio.h>

void schimba(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = (low - 1);

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] >= 0 && arr[j] < pivot) {
            i++;
            schimba(&arr[i], &arr[j]);
        }
    }
    schimba(&arr[i + 1], &arr[high]);
    return (i + 1);
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}

int main() {
    int n;

    printf("Introduceti valoarea lui n (n <= 10): ");
    scanf("%d", &n);

    if (n > 10) {
        printf("Trebuie ca n-ul sa fie <= 10.\n");
        return 1;
    }

    int arr[n];

    printf("Introduceti cele %d numere intregi: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n - 1);

    printf("Vectorul sortat astfel incat numerele pozitive sunt inaintea celorlalte:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

