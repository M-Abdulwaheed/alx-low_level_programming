#include "main.h"

/**
 * print_square - Function that print square
 *
 * @size: parameter to checked
 *
 * Return: always return void
 *
 */
void print_square(int size)
{
	if (size < 1)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1 ; i <= size ; i++)
		{
			for (j = 1 ; j <= size ; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
