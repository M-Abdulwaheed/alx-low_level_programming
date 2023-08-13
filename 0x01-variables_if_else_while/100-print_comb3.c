#include <stdio.h>

/**
 *main - main function
 *
 * Return: Always return 0
 */
int main(void)
{
	int i;
	int j;

	for (i = 0 ; i < 10 ; i++)
	{
		for (j = i + 1; j < 10 ; j++)
			if (i != j)
		{
			putchar (i + '0');
			putchar (j + '0');
			putchar (',');
			putchar (' ');
		}
			else
			putchar ('\n');
	}
	return (0);
}
