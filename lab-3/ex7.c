//Se citește un număr natural de 3 cifre. Să se determine câte cifre 
//impare conține numărul dat.
#include<stdio.h>

int afisare(int n)
{   
    int c, k=0;
    while ( n != 0 )
    {   
        c=n%10;
        if( (c)%2==1 )
        {
            k = k + 1;
        }
        n= n / 10;
    }
    return k;
}
int main(void)
{
    int n;
    printf("O valoare pentru n:\n");
    scanf("%d", &n);
    if( n > 99 && n <1000)
    {
        int k = afisare(n);
        if(k != 0)
            {
                printf("Numarul dat are %d cifre impare.\n", k);
            }
        else
            {
                printf("Numarul dat nu are cifre impare\n"); 
            }
    }
    else
    {
        printf("nu exista numar de 3 cifre");
    }
    return 0;
}