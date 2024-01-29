#include "main.h"

/**
 * *_strchr - function to locate a character in  a string
 *
 * @s: String to be checked
 *
 * @c: Character to search for
 *
 * Return: always return null of s
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	return (NULL);
}
