#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns single numbers from 0 - 9
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}

	putchar('\n');
	return (0);
}
