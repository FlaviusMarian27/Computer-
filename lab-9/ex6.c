/*Se va citi un n<=10. Se vor citi apoi n produse, 
fiecare definit prin nume (un șir de caractere), 
cantitate (real) și preț unitar (real). Unele produse 
pot să fie date de mai multe ori, cu valori diferite. 
Să se calculeze pentru fiecare produs cantitatea și 
prețul total, iar în final să se calculeze și prețul 
global pentru toate produsele. 
Exemplu:  
Intrare-> 3 mere  2.5  4  pere  2  7.5  mere  3  5
Iesire -> mere 5.5, 25
          pere 2, 15
          preț global: 40
*/

#include<stdio.h>
#include<string.h>

#define MAX_PRODUCTS 10
#define MAX_NAME_LENGTH 50

struct produs
{
    char nume[MAX_NAME_LENGTH];
    float cantitate;
    float pretUnitar;
};

void afisare(struct produs p)
{
    float pretTotal = p.cantitate * p.pretUnitar;
    printf("%s %.2f, %.2f\n", p.nume, p.cantitate, pretTotal);
}
int main ( void )
{
    int n;
    do
    {
        printf("Introduce o valoare pentru n <=10 pozitiv: ");
        scanf("%d", &n);
    } while (n < 1 ||  n > MAX_PRODUCTS);

    struct produs produse[MAX_PRODUCTS];

    for ( int i = 0 ; i < n  ; i++ )
        {
            printf("Introduceti numele produsului %d: ", i + 1 );
            scanf("%s", produse[i].nume);

            printf("Introduceti cantitatea produsului %d: ", i+1);
            scanf("%f", &produse[i].cantitate);

            printf("Introduceti pretul unitar pentru produs %d: ", i + 1);
            scanf("%f", &produse[i].pretUnitar);

        }
    
    printf("\nIesire:\n");
     
    for (int i = 0; i < n; i++) 
    {
        afisare(produse[i]);
    }
    
    float pretGlobal = 0 ;
    for ( int  i = 0 ; i < n ; i++ )
        {
            pretGlobal = pretGlobal + (produse[i].cantitate * produse[i].pretUnitar);
        }
    printf("\nPreț global: %.2f\n", pretGlobal);
    return 0;
}