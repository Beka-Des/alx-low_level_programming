#include <stdio.h>

/**
  * main - prints all possible combinations of single-digit numbers.
  * separated by ,, followed by a space
  * Return: 0 after finish
  */
int main(void)
{
	char num[] = "0123456789";
	int i = 0;
	char comma = ',';
	char space = ' ';

	while (i < 10)
	{
		putchar(num[i]);
		i++;
		if (i > 9)
			break;
		putchar(comma);
		putchar(space);

	}
	putchar('\n');
	return (0);
}
