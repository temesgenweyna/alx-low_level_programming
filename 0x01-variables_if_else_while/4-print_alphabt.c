#include <stdio.h>

/**
 * main - returns alphabets except e and q
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	int ch = 'a';

	while (ch <= 'z')
	{
		if ((ch !='e') && (ch !='q'))
		{
			putchar(ch);
		}
		ch++;
	}

	putchar('\n');
	return (0);
}
