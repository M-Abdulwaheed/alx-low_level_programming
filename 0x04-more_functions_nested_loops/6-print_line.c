#include "main.h"

/**
 * print_line - function that prints lines
 *
 * @n: print '_' n number of times
 *
 * Return: Always return 0
 */
void print_line(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		int i;

		for (i = 1 ; i <= n ; i++)
			_putchar('_');
		_putchar('\n');
	}
}
