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
	char j;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i + 'o');
	for (j = 'a' ; j <= 'f' ; i++)
		putchar(j);
	putchar('\n');
	return (0);
}
