#include <stdio.h>

/**
 * main - main function
 *
 * Return: always return 0
 *
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar (i + '0');
		if (i < 9)
		{
			putchar (',');
			putchar (' ');
		}
		else
			putchar (' ');
	}
	return (0);
}
