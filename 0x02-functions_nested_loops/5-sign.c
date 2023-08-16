#include "main.h"

/**
 * print_sign - A function that prints the sign of a number
 *
 * @n: integer to be checked
 *
 * Return: Always return 1, 0 or -1 depending on the result
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
