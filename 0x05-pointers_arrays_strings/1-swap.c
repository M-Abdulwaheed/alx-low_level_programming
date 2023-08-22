#include "main.h"

/**
 * swap_int - Function that swaps the value of two integers
 *
 * @a: first parameter to be checked
 *
 * @b: second parameter to be checked
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
