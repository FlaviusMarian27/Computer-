/*Scrieti si testati cu date de la intrare o functie care ia ca parametri doua numere intregi 
si returneaza suma lor, folosind operatori pe biti. Calculati suma bit cu bit, cu propagarea 
transportului, cu algoritmul de adunare pe hartie pencil-and-paper, fara a folosi operatori aritmetici.*/ 

#include<stdio.h>
#include<stdint.h>

int adunaPeBiti(int a, int b) 
{
    int transport;
    while (b != 0) 
    {
        transport = a & b;
        a = a ^ b;
        b = transport << 1;
    }
    return a;
}

int main ( void )
{
    int a, b;
    printf("O valoare pentru a: ");
    scanf("%d", &a);
    printf("O valoare pentru b: ");
    scanf("%d", &b);
    int suma = adunaPeBiti(a,b);
    printf("Suma: %d\n", suma);
    return 0;
}