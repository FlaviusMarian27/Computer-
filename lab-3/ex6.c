/*Să se afișeze tabla înmulțirii pentru toate numerele de la 0 la 10 inclusiv, 
sub forma: 0*0=0, 0*1=0,..., 0*10=0, 1*0=0, 1*1=1, ... 10*10=100 */
#include<stdio.h>
void afisare ( int n )
{
    int i;
    for( i= 0; i<=10; i++ )
    {
         printf("%d*%d=%d\n", n, i, n*i);
    }
     printf("\n");
    
}
int main(void)
{
     int i;

    for(i = 0; i <= 10; i++) {
        afisare(i);
    }
    return 0;
}