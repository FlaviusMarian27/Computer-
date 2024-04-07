/*

//1

#include<stdio.h>

void max_add ( int *a, int *b, int **maxi )
{
  if ( *a > *b )
    {
      *maxi = a;
    }
  else
    {
      *maxi = b;
    }
}
int main ( void )
{

  int a;
  printf("O valoare pentru a: ");
  scanf("%d",&a);

  int b;
  printf("O valoare pentru b: ");
  scanf("%d",&b);

  int * max_ptr;
  max_add(&a,&b,&max_ptr);

  printf("Valoarea maxima: %d\n", *max_ptr); 
  return 0;
}


//2

#include<stdio.h>

void read(int v[], int n)
{
  for ( int i = 0 ; i < n; i++ )
    {
      scanf("%d",&v[i]);
    }
}

int egal ( int v1[] , int v2[] , int n )
{
  for ( int i = 0 ; i < n ; i++ )
    {
      if ( v1[i] != v2[i] )
	{
	  return 0;
	}
    }
  return 1;
}
int main ( void )
{

  int n;
  printf("Introduceti o valoare pentru n: ");
  scanf("%d",&n);

  if ( n > 10 )
    {
      printf("trebuie ca n<=10");
      return 0;
    }

  int v1[n],v2[n];

  printf("Citire vector v1: ");
  read(v1,n);

  printf("Citire vector v2: ");
  read(v2,n);

  if ( egal ( v1,v2,n) )
    {
      printf("Vectori egali\n");
    }
  else
    {
      printf("Vectorii difera\n");
    }
  return 0;
}

//4
#include<stdio.h>

void adresa ( double *a, double *b )
{
  if ( *a > *b )
    {
      printf("%lf este la cea mai mica adresa de memorie\n",*b);
    }

  if ( *a < *b )
    {
      printf("%lf este la cea mai mica adresa de memorie\n",*a);
    }

  if ( *a == *b )
    {
      printf("Atat %lf si %lf sunt la aceeasi adresa de memorie\n",*a,*b);
    }
}
int main ( void )
{
  double num1,num2;

  printf("Introduceti prima valoare: ");
  scanf("%lf",&num1);

  printf("Introduceti a doua valoare: ");
  scanf("%lf",&num2);

  adresa(&num1,&num2);
  return 0;
}


//4
#include<stdio.h>

void schimb ( int *a, int *b)
{
  int p;;
  p = *a;
  *a = *b;
  *b = p;
}
int main ( void )
{
  int a,b;

  printf("O valoare pt a: ");
  scanf("%d",&a);

  printf("O valoare pt b: ");
  scanf("%d",&b);

  printf("Valorile initiale a=%d si b=%d \n", a,b);

  schimb(&a,&b);

  printf("Valorile dupa schimb a=%d si b=%d \n", a,b);
  return 0;
}

//5

#include<stdio.h>

void neg( int n, int *p)
{
  for ( int i = 0 ; i < n ;i++)
    {
      scanf("%d", p+i);
    }

  int k = 0 ;
  for ( int i = 0 ; i < n ; i++ )
    {
      if ( *(p+i) < 0 )
	      {
	          k++;
	      }
    }
  printf("Valori negative: %d\n", k);
}

int main ( void )
{
  int n;
  printf("Dimensiunea vectorului: ");
  scanf("%d", &n);

  int vector[n];
  int *p = vector; 

  printf("Introduceți elementele vectorului: ");
  neg(n,p);
  return 0;
}

//6
#include<stdio.h>

void min ( int n , int *p )
{
  for ( int i = 0 ; i < n ; i++ )
    {
      scanf("%d",(p+i));
    }

  int mini;
  mini = *p;
  for ( int i = 0 ; i < n ; i++ )
    {
      if ( *(p+i) < mini )
	{
	  mini = *(p+i);
	}
    }
  printf("Minimul: %d\n",mini);
}
int main ( void )
{
  int n;

  printf("O valoare pentru n: ");
  scanf("%d",&n);

  int v[n];
  int *ptr = v;

  printf("Introduceți elementele: ");
  min(n,ptr);
  return 0 ;
}


//7

#include<stdio.h>

#define SIZE 1000
void read_array ( int n , int *p )
{
  for ( int i = 0 ; i < n ; i++ )
    {
      scanf("%d",(p+i));
    }
}

void print_array ( int n , int *p )
{
  for ( int i = 0 ; i < n ; i++ )
    {
      printf("%d ", *(p+i));
    }
  printf("\n");
}

void sort_array( int n , int *p )
{
  for(int i = 0 ; i < n - 1 ; i++ )
    {
      for (int j = i + 1 ; j < n ; j++ )
	      {
	        if ( *(p+i) < *(p+j) )
	          {
	            int aux = *(p+i);
	            *(p+i) = *(p+j);
	            *(p+j) = aux;
	          }
	      }
    }
  
}

int main ( void )
{
  int n;
  int tab[SIZE];

  printf("O valoare pentru n: ");
  scanf("%d",&n);

  if ( n > 10 )
    {
      printf("n <= 10\n");
      return 0;
    }
  int *ptr = tab;

  printf("Introduceti valorile: ");
  read_array(n,ptr);

  sort_array(n,ptr);
  printf("Array sortat: ");
  print_array(n,ptr);

  
  
  return 0;
}


//8

#include<stdio.h>

void read ( int n , int  *a )
{
  for(int i = 0 ; i < n ; i++ )
    {
      scanf("%d",(a+i));
    }
}

void stergere(int *n, int *a)
{
  int i = 0 ;
  while ( i < *n)
    {
      if ( *(a+i) % 2 == 0 )
	{
	  for ( int j = i; j < *n-1 ; j++ )
	    {
	      *(a+j) = *(a+j+1);
	    }
	  *n = *n-1;
	}
      else
	{
	  i++;
	}
    }
}

void print_array ( int n , int *a)
{
  for( int i = 0 ; i < n ; i++ )
    {
      printf("%d ",*(a+i));
    }
  printf("\n");
}

int main ( void )
{

  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  int tab[n];
  int *a = tab;
  
  read(n,a);
  printf("Valorile citite: ");
  print_array(n,a);

  stergere(&n,a);
  printf("Valorile dupa stergere: ");
  print_array(n,a);
  return 0;
}

//9

#include <stdio.h>

void read(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
}

void inserare(int *n, int *a)
{
    for (int i = 0; i < *n; i++)
    {
      if (*(a + i) > 0)
        {
            for (int j = *n ; j > i; j--)
            {
                *(a + j) = *(a + j - 1);
            }
            *(a + i) = -1 * (*(a + i));
            (*n)++;
	    i++;
        }
    }
}

void print_array(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(a + i));
    }
    printf("\n");
}

int main(void)
{

    int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);

    int tab[1000];
    int *a = tab;

    read(n, a);
    printf("Valorile citite: ");
    print_array(n, a);

    inserare(&n, a);
    printf("Valorile dupa: ");
    print_array(n, a);
    return 0;

//10

#include <stdio.h>

void read(int n, int *a)
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d", (a + i));
    }
}

void find_duplicates(int n, int *a)
{
    printf("Valorile cu cel putin un duplicat sunt:\n");

    for (int i = 0; i < n; i++)
    {
        int k = 0;

        for (int j = i + 1; j < n; j++)
        {
            if (*(a + i) == *(a + j))
            {
                k = 1;
                break;
            }
        }

        if (k)
        {
            printf("%d ", *(a + i));
        }
    }

}



int main(void)
{
    int n;
    printf("O valoare pentru n: ");
    scanf("%d", &n);

    int tab[n];
    int *a = tab;

    read(n, a);
    find_duplicates(n, a);

    return 0;
}


//11

#include <stdio.h>

#define SIZE 100

void citire(int *p, int *size)
{
    if (*size < SIZE)
    {
        printf("Introduceti o valoare intreaga: ");
        scanf("%d", p + (*size));
        (*size)++;
        printf("Valoare adaugata cu succes.\n");
    }
    else
    {
        printf("Vectorul este plin. Nu se mai pot adauga elemente.\n");
    }
}

void afisare(int *p, int size)
{
    printf("Elementele din vector sunt: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

void stergere(int *size, int *p)
{
    if (*size == 0)
    {
        printf("Vectorul este gol. Nu exista elemente de sters.\n");
        return;
    }

    int valoare;
    printf("Introduceti valoarea de sters: ");
    scanf("%d", &valoare);

    int i = 0;
    while (i < *size)
    {
        if (*(p + i) == valoare)
        {
            for (int j = i; j < *size - 1; j++)
            {
                *(p + j) = *(p + j + 1);
            }
            (*size)--;
        }
        else
        {
            i++;
        }
    }

    printf("Elemente sterse cu succes.\n");
}

int main()
{
    int vector[SIZE];
    int size = 0;
    int optiune;

    do
    {
        printf("\nMeniu:\n");
        printf("1. Citire\n");
        printf("2. Afisare\n");
        printf("3. Stergere\n");
        printf("4. Iesire\n");
        printf("Introduceti optiunea: ");
        scanf("%d", &optiune);

        switch (optiune)
        {
        case 1:
            citire(vector, &size);
            break;
        case 2:
            afisare(vector, size);
            break;
        case 3:
            stergere(&size, vector);
            break;
        case 4:
            printf("Programul se inchide.\n");
            break;
        default:
            printf("Optiune invalida. Incercati din nou.\n");
        }
    } while (optiune != 4);

    return 0;
}

*/
//12

#include <stdio.h>

#define SIZE 100

void insertionSort(int *p, int size)
{
    int i, key, j;
    for (i = 1; i < size; i++)
    {
        key = *(p + i);
        j = i - 1;

        while (j >= 0 && *(p + j) > key)
        {
            *(p + j + 1) = *(p + j);
            j = j - 1;
        }
        *(p + j + 1) = key;
    }
}

void printArray(int *p, int size)
{
    printf("Vectorul curent: ");
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(p + i));
    }
    printf("\n");
}

int main()
{
    int vector[SIZE];
    int size = 0;
    int value;

    do
    {
        printf("Introduceti o valoare intreaga (0 pentru oprire): ");
        scanf("%d", &value);

        if (value != 0)
        {
            *(vector + size) = value;
            size++;
            insertionSort(vector, size);
            printArray(vector, size);
        }
        else
        {
            printf("Programul se inchide.\n");
        }

    } while (value != 0);

    return 0;
}

