#include "main.h"

/**
 *_memset() - Function to that fills memory with a constant byte.
 *
 * @s: pointer to the starting address
 *
 * @b: Value to be filled
 *
 * @n: Number of times to be filled
 *
 * Return: Always return a pointer to memory s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		s[i] = b;
	return (s);
}
