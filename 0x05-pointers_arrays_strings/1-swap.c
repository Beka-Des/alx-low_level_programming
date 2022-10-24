#include "main.h"
/**
  * swap_int - swaps two integers
  * @a: integer variable
  * @b: integer variable
  */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
