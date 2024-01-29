#include "main.h"
/**
 * _isupper - A function that checks for uppercase character
 *
 * Return: always return 1 if true otherwise return 0
 *
 * @c: parameter to be checked
 */
int _isupper(int c)
{
	if (c >= 'A' && c  <= 'Z')
		return (1);
	else
		return (0);
}
