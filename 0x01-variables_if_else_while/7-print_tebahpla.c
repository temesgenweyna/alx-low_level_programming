#include <stdio.h>

/**
 * main - returns lowercase alphabet in reverse
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
