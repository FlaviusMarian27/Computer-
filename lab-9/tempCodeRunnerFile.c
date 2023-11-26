#include<stdio.h>
#include<string.h>
#include<ctype>

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
    if ( fgets(v,SIZE,stdin) != NULL )
        {
            capitalizare(v);
        }
    return 0;
}