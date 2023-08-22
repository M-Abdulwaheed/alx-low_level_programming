#include "main.h"
/**
 * _puts - function to print string
 *
 * @i: parameter to be evaluated
 *
 * Retrun: Always return a character
 */
void _puts(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
