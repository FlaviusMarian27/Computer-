/*Se citește o valoare. Să se afișeze 
suma primilor săi 4 biți LSB (cei mai 
din dreapta)*/

#include<stdio.h>
#include<stdint.h>


int suma ( int n ) 
{
    int s = 0;
    for ( int i = 0;  i <= n/2; i++ )
        {
            s = s + (( n >> i ) & 1);
        }
    return s;

}
int main( void )
{
    int n;
    printf("O valoarea pentru suma: ");
    scanf("%d", &n);
    int r = suma(n);
    printf("Suma este: %d\n", r);
    return 0;
}