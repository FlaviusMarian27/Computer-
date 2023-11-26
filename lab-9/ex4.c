/*Se citește un text care este alcătuit doar din litere. 
Să se afișeze pentru fiecare literă de câte ori apare în 
text*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define SIZE 1024
void numar ( char *v, int f[])
{
    for ( int i = 0 ; i < strlen(v); i++)
        {
            if ( isalpha(v[i]) )
                {
                    v[i] = tolower(v[i]);
                    f[v[i] - 'a'] ++;
                }
        }
    
}
int main ( void )
{
    char v[SIZE];
    int f[26] = {0};
    if ( fgets(v,SIZE,stdin) != NULL )
        {
            numar(v,f);
        }
    printf("Frecventa fiecarei litere:\n");
    for (int i = 0; i < 26; i++) 
    {
        if (f[i] > 0)
            {
                printf("%c: %d\n", 'a' + i, f[i]);
            }
    }
    return 0;
}