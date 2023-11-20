#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: string to be printed
 *
 * Return: factorial of any inputed number
 **/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
