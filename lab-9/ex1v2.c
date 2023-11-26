/*Să se citească o linie de la tastatură. Linia conține 
cuvinte care sunt formate doar din litere, cuvintele fiind 
despărțite prin orice alte caractere ce nu sunt litere. 
Să se capitalizeze prima literă din fiecare cuvânt și să 
se afișeze șirul rezultat*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#define SIZE 1024

void capitalizare ( char *v)
{
    for ( int i = 0 ; i < strlen(v); i++)
        {
            if ( v[i-1] == 0 )
                {
                    v[i] = toupper(v[i]);
                }
            
            if ( v[i-1] == ' ' && islower(v[i]) )
                {
                    v[i] = toupper(v[i]);
                }
        }
    printf("%s", v);
}
int main ( void )
{
    char v[SIZE];
    if ( fgets(v,SIZE,stdin) != NULL )
        {
            capitalizare(v);
        }
    return 0;
}