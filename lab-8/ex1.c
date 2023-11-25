/*Scrieți un program, folosind getchar() și putchar() 
prin care se numără cuvintele de la stdint. Se consideră 
un cuvânt ca fiind o secvență de litere mici și/sau mari 
care despărțite prin unul sau mai multe spații, tab-uri, 
linii noi și EOF. Testarea se va face atât clasic prin 
scriere la stdin cât și prin redirectare cu un fișier text 
realizat inainte ca și caz de test catre intrarea standard 
a programului*/

#include<stdio.h>
#include<ctype.h>
int numarcuv()
{
    int c;
    int numCuvinte = 0;
    int inCuvant = 0;
    while ( (c = getchar ()) != EOF)
        {
            if ( isalpha ( c ) )
                {
                    if (inCuvant == 0)
                        {
                            inCuvant = 0 ;
                            numCuvinte++;
                        }
                }
            else
                {
                    inCuvant = 0 ;
                }
        }
    return numCuvinte;
    
}
int main ( void )
{
    printf("Introduceti textul:\n");

    int numarCuvinte = numarcuv();

    printf("\nNumarul de cuvinte: %d\n", numarCuvinte);

    return 0;
}