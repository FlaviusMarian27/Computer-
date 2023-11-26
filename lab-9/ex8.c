/*Sa se scrie o functie cu urmatorul antet:
uint32_t upper_sub_string(char *str, const char *substr);
Pentru fiecare aparitie a string-ului substr in string-ul 
str se va modifica ca acest string din str sa fie transpus 
in litere mari (upper-case) Functia va returna numarul de aparitii.

Exemplu:
char s1[] = "Acesta este un string si stringul este terminat cu 0x00";
char s1[] = "string";
int r = upper_sub_string(s1, s2);*/

#include<stdio.h>
#include<string.h>
#include<stdint.h>
#include<ctype.h>

#define SIZE 1024

uint32_t upper_sub_string(char *str, const char *substr)
{
    int k = 0;
    char *f= NULL;
    while( ( f = strstr(str,substr) ) != NULL )
        {
            for ( char *p = f ; p < f + strlen(substr); p++)
                {
                    *p = toupper(*p);
                }
            k = k  + 1;
        }
    return k;
}

int main ( void )
{
    char str[SIZE];

    if ( fgets(str, SIZE, stdin ) != NULL )
        {
            upper_sub_string(str,"mere");
        }

    for (int i = 0 ; i < strlen(str) ; i++)
        {
            printf("%c", str[i]);
        }
    return 0;
}