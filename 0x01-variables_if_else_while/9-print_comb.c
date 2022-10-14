#include <stdio.h>
/**
  * main - prints all single digit numbers of base 10 starting from 0, followed
  * with comma and apce also a new line.
  * Return: 0 when finish
  */
int main(void)
{
	int n;
	int i = 0;
	int comma = ',';
	int space = ' ';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (i > 8)
			break;
		putchar(comma);
		putchar(space);
		i++;
	}
	putchar('\n');
	return (0);
}
