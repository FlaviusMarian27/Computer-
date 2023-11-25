/*Se cere un număr impar n>4. Să se deseneze cifra „8”, scris ca un pătrat cu o linie 
orizontală în mijloc, în așa fel încât pe verticală și pe orizontală să fie câte n steluțe. 
În program nu vor fi admise duplicări de cod.*/

#include<stdio.h>

int cifra8( int n )
{
    if( n % 2 == 0  || n > 4 )
    {
        printf("Numarul trebuie sa fie unul impar si trebuie totodata sa fie mai mare decat 4\n");
    }
    
    for( int i = 1; i <= n; i++ )
        {
            for( int j = 1; j <= n; j++ )
                {
                    if ( i == 1 || j == 1 || i == n || j == n || i == (n+1)/2 )
                        {
                            printf("%c",'*');
                        }
                    else
                        {
                            printf("%c",' ');
                        }
                }
         printf("\n");
        }
    
}

int main(void)
{
    int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);
    int k;
    k = cifra8(n);
    printf("%d", k);
    return 0;
}