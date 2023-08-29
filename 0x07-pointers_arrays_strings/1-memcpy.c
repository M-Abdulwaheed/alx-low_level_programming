#include "main.h"

/**
 * _memcpy - Function that copies memory area
 *
 * @dest: memory area to copy to
 *
 * @src: memory area to copy from
 *
 * @n: size to copy
 *
 * Return: Always return dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
		src[i] = dest[i];
	return (dest);
}
