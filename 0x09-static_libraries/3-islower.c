#include "main.h"

/**
 * _islower - this function checks for lowercase character
 *
 * @c: check
 *
 * Return: always return 1 if success and 0 if otherwise
 *
 */

int _islower(int c)
{
        if (c >= 'a' && c <= 'z')
                return (1);
        else
                return (0);
}
