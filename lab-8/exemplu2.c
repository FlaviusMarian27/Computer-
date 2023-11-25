#include <ctype.h>
#include <stdio.h>
int main()
{
   char c;
   printf("introduceti un caracter: ");
   scanf("%c", &c);
   if (isdigit(c))
       printf("este o cifra");   else if (islower(c))
       printf("este o litera mica -> %c", toupper(c));
   else if (isupper(c))
       printf("este o litera mare -> %c", tolower(c));
   else
       printf("este altceva");
   return 0;
}