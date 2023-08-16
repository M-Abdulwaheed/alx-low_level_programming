#include "main.h"

/**
 * print_last_digit - function to print last digit of number
 *
 * Return: Always return 0 if successful
 *
 * @i: values to be shecked
 */

int print_last_digit(int i)
{
	int j;

	j =  i % 10;
	if (i < 0)
		j = -j;
	_putchar(j + '0');
	return (j);
}
