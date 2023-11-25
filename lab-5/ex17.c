/*Scrieti si testati cu date de la intrare o functie care ia ca parametri 
doua numere intregi si returneaza diferenta lor, folosind operatori pe biti. 
Calculati diferenta bit cu bit, cu propagarea transportului, cu algoritmul 
de scadere pe hartie pencil-and-paper, fara a folosi operatori aritmetici.*/

#include<stdio.h>
#include<stdint.h>

int diferenta( int a, int b )
{
    b = ~b + 1;
    return a + b;
}

int main ( void )
{
    int a = 7;
    int b = 3;
    int dif = diferenta (a,b);
    printf("Diferenta: %d\n", dif);

    return 0;
}