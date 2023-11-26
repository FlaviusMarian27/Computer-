/*Se citește un n<=10 și 
apoi n nume de persoane, 
fiecare nume putând apărea 
de mai multe ori. Să se afișeze de 
câte ori apare fiecare nume*/
#include<stdio.h>
#include<string.h>

void nume( int n , char num[][100] )
{
    
    for ( int i = 0 ; i < n ; i++ )
        {
            if (num[i][0] != ' ')
            {
                int f = 1;
                for ( int j = i + 1 ; j < n ; j ++ )
                    {
                        if ( strcmp(num[i],num[j]) == 0)
                            {
                                f++;
                                num[j][0] = ' ';
                            }
                    }
                printf("%s apare de %d ori\n", num[i], f);
            }
        }
}

int main ( void )
{
    int n;
    printf("Introduceti numarul de nume: ");
    scanf("%d", &n);
    char num[n][100];
    for (int i = 0; i < n; i++)
        {
            printf("Nume %d: ", i + 1);
            scanf("%s", num[i]);
        }
    nume(n,num);
    for (int i = 0; i < n; i++) 
        {
            afisareSiCalcul(produse[i]);
        }

    float pretGlobal = 0 ;
    for ( int  i = 0 ; i < n ; i++ )
        {
            pretGlobal = pretGlobal + (p[i].cantitate * p[i].pretUnitar);
        }
    printf("\nPreț global: %.2f\n", pretGlobal);
    return 0;
}

