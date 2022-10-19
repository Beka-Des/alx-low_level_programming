#include "main.h"
/**
  * _abs - a function that computes the absolute value of an integer.
  * @num: integer receiver
  * Return: the value of num
  */
int _abs(int num)
{
	if (num < 0)
		return (num * -1);
	else
		return (num);
}
