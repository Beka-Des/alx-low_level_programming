#include <stdio.h>

/**
  * main - prints all single digit numbers of base 10 starting from 0, followed
  * by a new line.
  * Return: 0 after finish
  */
int main(void)
{
	int num[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int i = 0;

	while (i < 10)
	{
		printf("%d", num[i]);
		i++;
	}
	putchar('\n');
	return (0);
}
