/*
//1
#include<stdio.h>
#include<stdint.h>

int numar_segmente(unsigned int n)
{
    int numar_segmente = 0;
    int bit_anterior = n & 1;
   
    
    for (int i = 0; i < 32; i++)
      {
        int bit_curent = (n >> i) & 1;
	
        if (bit_curent != bit_anterior)
	        {
            numar_segmente++;
	        }

        bit_anterior = bit_curent;
      }

    return numar_segmente + 1;
}

int main(void) {
    unsigned int n = 0b000100;

    int rezultat = numar_segmente(n);
    printf("Numărul de segmente consecutive este: %d\n", rezultat);

    return 0;
}


//2

#include<stdio.h>
#define SIZE 1000
void afisare ( int n )
{
  int v[SIZE];

  for ( int i = 0 ; i < n ; i++ )
    {
      scanf("%d", &v[i]);
    }

  int minim;
  minim = v[ 0 ];

  for ( int i = 0 ; i < n ; i++ )
    {
      if ( v[i] < minim )
	{
	  minim = v[i];
	}
    }
  printf("Minimul este %d\n", minim);
}
int main ( void )
{
  int n;

  printf("O valoare pentru n: ");
  scanf("%d", &n);
  afisare(n);
  return 0;
}


//3
#include<stdio.h>
#define SIZE 1000
void val_pare_poz ( int n )
{
  if ( n > 10 )
    {
      printf("Trebuie sa citeste n valori care sunt < 11\n");
      
    }
  else
    {
      int v[SIZE];
      int k = 0;
      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d", &v[i]);
	}
      
      for ( int i = 0 ; i < n ; i++ )
	{
	  if ( v[i] > 0 && v[i] % 2 == 1 )
	    {
	      k=k+1;
	    }
	}

      
      if ( k == 0 )
	{
	  printf("Toate valorile pozitive sunt pare\n");
	}
      else
	{
	  printf("Nu toate valorile pozitive sunt pare\n");
	}
      
    }
  
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  val_pare_poz(n);
  return 0;
}


//4
#include<stdio.h>
#define SIZE 100
void afisare( int n , int k )
{

  int v[SIZE];
  
  for ( int i = 0 ; i < n ; i++ )
    {
      scanf("%d", &v[i]);
    }
  int t = 0;
  for( int i = 0 ; i < n ; i++ )
    {
      if ( v[i] > k )
	{
	  t = t + 1;
	}
    }

  if ( t != 0 )
    {
      printf("Am avut fix %d numere mai mari decat k\n", t);
    }
  else
    {
      printf("Nu exista numere mai mari decat k\n");
    }
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  int k;
  printf("O valoare pentru k: ");
  scanf("%d",&k);

  afisare(n,k);
  return 0;
}


//5

#include<stdio.h>
#define SIZE 1000
void minim ( int x, int y, int n)
{
  if ( x > y)
    {
      printf("X trebuie sa fie mai mic decat Y");
    }
  else
    {
      int v[SIZE];

      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d", &v[i]);
	}
      
      int minimul = v[0];
      for ( int i = 0 ; i < n ; i++ )
	{
	  if ( v[i] < minimul )
	    {
	      minimul = v[i];
	    }
	}

      if ( minimul >= x && minimul <= y )
	{
	  printf("Minimul %d apartine intrevalului [%d,%d]\n",minimul,x,y);
	}
      else
	{
	  printf("Minimul %d NU apartine intervalului [%d,%d]\n",minimul,x,y);
	}
    }
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  int x;
  printf("O valoare pentru x: ");
  scanf("%d",&x);

  int y;
  printf("O valoare pentru y: ");
  scanf("%d",&y);

  minim(x,y,n);
  return 0;
}


//6
#include<stdio.h>
#include<stdlib.h>

#define SIZE 100

void cinci(int n)
{
  if ( n > 5 )
    {
      printf("Valoarea data trebuie sa fie <= 5\n");
    }
  else
    {
      int v[SIZE];

      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
	}

      for ( int i = 0 ; i < n ; i++ )
	{
	  if ( abs(v[i]) > 10 )
	    {
	      printf("%d ",v[i]);
	    }
	}
    }
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d", &n);

  cinci(n);
  return 0;
}


//7

#include<stdio.h>

#define SIZE 1000

void sortare ( int n )
{
  if ( n > 10 )
    {
      printf("n trebuie <= 10");
    }
  else
    {
      int v[SIZE];

      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
	}

     int a[SIZE];
     int j = 0;

        for (int i = 0; i < n; i++)
	  {
            if (v[i] % 2 == 1)
	      {
                a[j] = v[i];
                j++;
	      }
	  }

        
        for (int i = 0; i < n; i++)
	  {
            if (v[i] % 2 == 0)
	      {
                a[j] = v[i];
		j++;
	      }
	  }
      
      printf("Vectorul sortat: ");
       for (int i = 0; i < n; i++)
	 {
            printf("%d ", a[i]);
	 }
       printf("\n");
    }
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d", &n);

  sortare(n);
  return 0;
}


//8

#include<stdio.h>

#define SIZE 100

void delete( int n )
{
  if ( n > 10 )
    {
      printf("n-ul ales nu este bun, trebuie ca n<=10");
    }
  else
    {
      int v[SIZE];

      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
	}

      for( int i = 0 ; i < n ; i++ )
	{
	  if( v[i] < v[i+1] )
	    {
	      for( int j = i + 1; j < n ; j++ )
		{
		  v[j-1] = v[j];
		}
	      n= n-1;
	      i=i-1;
	    }
	}
      printf("Vectorul dupa stergere: ");
      for( int i = 0 ; i < n; i++ )
	{
	  printf("%d ", v[i]);
	}
      printf("\n");
    }
    
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  delete(n);
  return 0;
}

//9

#include<stdio.h>

#define SIZE 1000

void inservare_zero_impar( int n )
{
  if ( n > 10 )
    {
      printf("n <= 10 nu mai mare decat 10");
    }
  else
    {
      int v[SIZE];
      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
	}

      for( int i = 0 ; i < n ; i++)
	{
	  if( v[i] % 2 == 1 )
	    {
	      for( int j = n ; j > i ; j--)
		{
		  v[j] = v[j-1];
		}
	      v[i] = 0;
	      n++;
	      i++;
	    }
	}

      printf("Vectorul inserat ");
      for(int i = 0 ; i < n ; i++ )
	{
	  printf("%d ", v[i]);
	}
      printf("\n");
    }
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  inservare_zero_impar(n);
  return 0;
}


//10

#include<stdio.h>

#define SIZE 1000

void poz_dupa_neg(int n)
{
  if ( n > 10 )
    {
      printf("n-ul ales nu este <= 10");
    }
  else
    {
      int v[SIZE];

      for( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
	}

      int a[SIZE];
      int j = 0;
      for(int i = 0 ; i < n ; i++)
	{
	  if ( v[i] > 0 )
	    {
	      a[j] = v[i];
	      j++;
	    }
	}

      for(int i = 0 ; i < n ; i++)
	{
	  if ( v[i] < 0 )
	    {
	      a[j] = v[i];
	      j++;
	    }
	}

      printf("Vectorul dupa sortare ");
      for( int i = 0 ; i < n ; i++ )
	{
	  printf("%d ", a[i]);
	}
      printf("\n");
      
    }
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  poz_dupa_neg(n);
  return 0;
}


//11

#include<stdio.h>

#define SIZE 1000

void duplicate(int n)
{
  if ( n > 10 )
    {
      printf("n-ul ales nu este <= 10");
    }
  else
    {
      int v[SIZE];

      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
	}

      for ( int i = 0 ; i < n ; i++ )
	{
	  int k = 0;
	  k = v[i];
	  for( int j = i + 1; j < n; j++ )
	    {
	      if ( k == v [j] )
		{
		  for( int x = j + 1 ; x < n ; x++ )
		    {
		      v[x-1] = v[x];
		    }
		  n--;
		  j--;
		}
	    }
	}

      printf("vectorul sortat ");
      for( int i = 0 ; i < n; i++ )
	{
	  printf("%d ", v[i]);
	}
      printf("\n");
    }
}
int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  duplicate(n);
  return 0;
}


//12

#include<stdio.h>

#define SIZE 10000


void patrat(int n)
{
  if ( n > 10 )
    {
      printf("n-ul ales nu este <= 10");
    }
  else
    {
      int v[SIZE];

      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
	}

      for( int i = 0 ; i < n ; i++ )
	{
	  n++;
	  for ( int j = n - 1  ; j > i ; j-- )
	    {
	      v[j] = v[j-1];
	    }
	  v[i+1] = v[i] * v[i];
 
	  i++;
	}

      printf("vectorul sortat ");
      for( int i = 0 ; i < n; i++ )
	{
	  printf("%d ", v[i]);
	}
      printf("\n");
    }
}

int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  patrat(n);
  return 0;
}
*/

//13
#include<stdio.h>

#define SIZE 1000


void sum_pro(int n)
{
  if ( n > 10 )
    {
      printf("n-ul ales nu este <= 10");
    }
  else
    {
      int v[SIZE*2];

      for ( int i = 0 ; i < n ; i++ )
	{
	  scanf("%d",&v[i]);
     
	}

      for (int i = 0; i < n; i++)
	{
            // Suma
            v[n * 2 - i * 2] = v[n - i - 1] + v[n * 2 - i * 2 - 1];
            // Produsul
            v[n * 2 - i * 2 + 1] = v[n - i - 1] * v[n * 2 - i * 2 - 1];
        }

      printf("vectorul inserat ");
      for( int i = 0 ; i < n * 2; i++ )
	{
	  printf("%d ", v[i]);
	}
      printf("\n");
    }
}

int main ( void )
{
  int n;
  printf("O valoare pentru n: ");
  scanf("%d",&n);

  sum_pro(n);
  return 0;
}
