#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  * main - assigns a random number to var n
  * then checks whether n is >0 or <0 or =0
  * prints n with its sign
  * Return: 0 every iteration
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
