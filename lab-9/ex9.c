/*
Sa se scrie o functie cu urmatorul antent
uint32_t string_replace(char *where, const char *what, const char *replace)

Functia inlocuieste fiecare aparitie a string-ului 
what in string-ul where cu string-ul replace. Se considera 
ca zona de memorie a lui where este suficient de mare ca sa 
poata contine noul string. Functia returneaza numarul de inlocuiri

char s1[1000];
char s2[] = "string";
char s3[] = "sir de caractere";
strcpy(s1, "Acesta este un string si un string este terminat cu 0x00");
int r = string_replace(s1, s2, s3);
s1 devine "Acesta este un sir de caractere si un sir de caractere este terminat cu 0x00";
s2, s3 - raman neschimbate
r = 2
*/

#include<stdio.h>
#include<string.h>
#include<stdint.h>

#define SIZE 2048

uint32_t string_replace(char *where, const char *what, const char *replace)
{
    uint32_t c = 0;
    size_t what_len = strlen(what);
    size_t replace_len = strlen(replace);

    char *pos = NULL;
    while ( (pos = strstr(where, what) ) != NULL )
        {
            // inlocuieste sirul cu cel nou
            memmove( pos + replace_len , pos + what_len, strlen(pos + what_len) + 1);
            memcpy (pos, replace, replace_len );

            c = c + 1;
            pos = pos + replace_len;
        }

    return c;
}

int main ( void )
{
    char where[SIZE]= "ana are mere si mere si mere";
    const char what[] = "mere";
    const char replace[] = "prune";

    printf("Textul initial: %s\n", where);
      
    uint32_t replacements = string_replace(where,what,replace);

    printf("Textul dupa inlocuire: %s\n", where);

    printf("Numarul de inlocuiri: %d\n", replacements);

    return 0;
}