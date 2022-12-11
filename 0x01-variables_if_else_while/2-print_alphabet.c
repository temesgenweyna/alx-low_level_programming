#include <stdio.h>

/**
 * main - main function that print all the alphabets
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
