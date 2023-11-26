#include<stdio.h>
#include<stdint.h>
#include<ctype.h>

#define MAX_LENGTH 100
void capitalizare( int *str)
{
    int i = 0;
    int c = 0;
    int cuv = 0;
    while ( ( c = getchar() ) != EOF )
    {
        if ( i == 0 )
        {
            c = toupper ( c );
            cuv = cuv + 1;
        }
        if ( i == ' ' && islower(c)  )
            {
                c = toupper ( c );
                cuv = cuv + 1;
            }
        i = c;
        putchar(c);
    }
    *str=cuv;
}
int main ( void )
{
    int str;
    capitalizare(&str);
    printf("numar de cuvinte care au fost capitalizate: %d\n", str);
    return 0;
}