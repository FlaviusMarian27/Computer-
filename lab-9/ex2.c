/*Se va citi un n<=10. Se vor citi apoi pe rând n nume. 
Se cere ca în final să fie afișat numele cel mai lung 
și lungimea sa*/

#include<stdio.h>
#include<string.h>
#define SIZE 50
void cuvmax( char nume[10][SIZE], int n, char mxi[SIZE], int *lm)
{
    for ( int i = 0 ; i < n ; i++)
        {
            if ( strlen(nume[i]) > *lm)
            {
                *lm = strlen(nume[i]);
                strcpy(mxi, nume[i]);
            }
        }
}
int main ( void )
{
    char nume[10][SIZE];
    char mxi[SIZE] = "";
    int lm = 0;
    int n;
    printf("Introduceti valoarea lui n (n<=10): ");
    scanf("%d", &n);

    if ( n > 11)
    {
        printf("n trebuie sa fie <= 10");
        return 0;
    }
    for ( int i = 0 ; i < n ; i++ )
        {
            printf("Introduce un nume: ");
            scanf("%s",nume[i]);
        }

    cuvmax (nume,n,mxi,&lm);

    printf("Numele cel mai lung este: %s si are lungimea %d.\n", mxi, lm);
    return 0;
}