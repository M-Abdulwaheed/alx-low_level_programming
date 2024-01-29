#include "main.h"

/**
 *_memset - Function to that fills memory with a constant byte.
 *
 * @s: pointer to the starting address
 *
 * @b: Value to be filled
 *
 * @n: Number of times to be filled
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

