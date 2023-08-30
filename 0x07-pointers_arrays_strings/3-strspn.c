#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 *
 * @s: string to be checked
 *
 * @accept: the character to search for
 *
 * Return: Number of bytes in the initial segment of 's'
 * which consists entirely of characters in 'accept'
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		int count = 0;

		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				count = 1;
				break;
			}
		}
		if (!count)
			return (n);

		n++;
		s++;
	}
	return (n);
}
