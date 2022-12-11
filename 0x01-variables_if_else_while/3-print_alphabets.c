#include <stdio.h>

/**
 * main - returns upercase alphabets
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ch = 'A';

	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
