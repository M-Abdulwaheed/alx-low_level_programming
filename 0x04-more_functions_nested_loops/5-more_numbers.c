#include "main.h"
/**
 * more_numbers - A function that prints 10 times the number
 *
 * Return: Always return void
 */

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10; i++)
	{
		for (j = 0 ; j < 16 ; j++)
		{
			if (j > 9)
				_putchar((j / 10) + '0');
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

