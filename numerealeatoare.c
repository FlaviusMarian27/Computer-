#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int n = 0;
	srand(time(NULL));
	for (int i = 0; i < 5; i++)
	{
		n = rand() % 10;
		printf ("%d\n", n);
	}
	return 0;
}