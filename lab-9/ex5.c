/*Se citește n din intervalul [3,10] și apoi n nume de persoane. 
Să se concateneze primele n-1 nume folosind „, ”, ultimul nume 
cu „ si ”, iar apoi să se adauge „invata.”. Să se afișeze propoziția 
rezultată. Exemplu: n=3, numele: Ion Ana Maria
Propoziție rezultata: Ion, Ana și Maria invata.*/

#include<stdio.h>
#include<string.h>

#define SIZE 1024
#define MAX_N 10
#define MAX_NAME_LENGTH 50
#define MAX_RESULT_LENGTH 500

void persoane( int n, char num[][MAX_RESULT_LENGTH], char r[])
{
    strcpy (r, "");
    for ( int i = 0 ; i < n - 2 ; i++ )
        {
            strcat(r,num[i]);
            strcat(r, ", ");
        }
    strcat(r, num[n - 2]);
    strcat(r, " si ");
    strcat(r, num[n - 1]);
    strcat(r, " invata.");

    
}

int main ( void )
{
    int n;
    
    do
    {
        printf("Introduceti n (intre 3 si 10): ");
        scanf("%d", &n);
    } while (n < 3 || n > 10);
    
    char num[MAX_N][MAX_RESULT_LENGTH];
    for ( int i = 0 ; i < n ; i = i + 1)
        {
            printf("Introduceti numele %d: ", i + 1);
            scanf("%s", num[i]);
        }
    char r[MAX_RESULT_LENGTH];
    persoane(n,num,r);
    printf("Propozitia rezultata: %s\n", r);
    return 0;
}