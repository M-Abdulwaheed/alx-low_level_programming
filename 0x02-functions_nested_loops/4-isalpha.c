#include "main.h"

/**
 * _isalpha - a function that check alphaabetic character
 *
 * @c: alphabet to be checked
 *
 * Return: Always return 0 if successful and 1 otherwise
 *
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
