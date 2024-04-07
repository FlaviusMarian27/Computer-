#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10

// Funcție pentru setarea unui bit la o anumită poziție într-un număr întreg
void setBit(int *number, int position) {
    *number |= (1 << position);
}

// Funcție pentru citirea unui număr întreg de la intrarea standard
int readInteger(const char *prompt) {
    int input;
    printf("%s", prompt);
    scanf("%d", &input);
    return input;
}

// Funcție pentru afișarea stării bitset-ului
void printState(const int *state, int size) {
    printf("Starea actuala:\n");
    for (int i = 0; i < size; ++i) {
        printf("Bit %d: %d\n", i, (*state & (1 << i)) ? 1 : 0);
    }
}

int main() {
    // Inițializarea tabloului de stări cu numere aleatoare între 0 și 255
    int states[SIZE];
    srand((unsigned int)time(NULL));
    for (int i = 0; i < SIZE; ++i) {
        states[i] = rand() % 256;
    }

    // Afișarea stării inițiale
    printf("Initial:\n");
    printState(states, SIZE);

    // Citirea unei stări noi de la intrarea standard
    int newState = readInteger("Introduceti o noua stare intre 0 si 255: ");

    // Setarea primului bit în noul număr
    setBit(&newState, 0);

    // Afișarea noii stări
    printf("Noua stare:\n");
    printState(&newState, 1);

    return 0;
}
