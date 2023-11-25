/*Se citește o valoare de tip int. Se cere să se 
afișeze valoarea bitului de semn. Nu se cunoaște 
a priori dimensiunea tipului de date int.*/
#include<stdio.h>
#include<stdint.h>

int bit_de_semn( int num )
{
    int x;
    x = (num >> (sizeof(int) * 8 - 1)) & 1;
    return x;
}
int main ( void )
{
    int num;
    printf("O valoare pentru num: ");
    scanf("%d", &num);

    int bds = bit_de_semn( num );
    printf("Aici este bitul de semn: %d\n", bds);
    return 0;
}