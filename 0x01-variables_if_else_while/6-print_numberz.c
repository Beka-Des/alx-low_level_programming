#include <stdio.h>

/**
  * main - prints all single digit numbers of base 10 starting from 0, followed
  * by a new line.
  * Return: 0 after finish
  */
int main(void)
{
	int num[10];
	int i = 0;

	while (i < 10)
	{
		putchar(i%10);
		i++;
	}
	putchar('\n');
	return (0);
}
