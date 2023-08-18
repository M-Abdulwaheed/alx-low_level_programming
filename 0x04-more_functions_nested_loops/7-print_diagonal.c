#include "main.h"

/**
 * print_diagonal - function that print diagonal lines
 *
 * @n: number of time the \ will be printed
 *
 * Return: Always return void
 */

void print_diagonal(int n)
{
	if (n < 1)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1 ; i <= n ; i++)
		{
			for (j = 1 ; j <= i ; j++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
}
