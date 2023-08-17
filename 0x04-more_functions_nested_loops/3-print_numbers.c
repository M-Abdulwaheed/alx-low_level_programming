#include "main.h"
/**
 * print_numbers - A function that print number
 *
 * Return: always return void
 */
void print_numbers(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
