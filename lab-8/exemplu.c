/*Să se citească un caracter de la tastatură și să se afișeze dacă este 
cifră, literă mică, literă mare sau altceva. În caz că e litera mică să 
se afișeze litera mare corespunzătoare și invers.*/

#include <stdio.h>
int main()
{
   char c;
   printf("introduceti un caracter: ");
   scanf("%c", &c);
   if (c >= '0' && c <= '9')
       printf("este o cifra");
   else if (c >= 'a' && c <= 'z')
       printf("este o litera mica -> %c", c - 'a' + 'A');
   else if (c >= 'A' && c <= 'Z')
       printf("este o litera mare -> %c", c - 'A' + 'a');
   else
       printf("este altceva");
   return 0;
}