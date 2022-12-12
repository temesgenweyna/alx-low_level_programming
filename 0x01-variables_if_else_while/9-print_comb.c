#include <stdio.h>

/**
 * main - returns all posible combination of single digit numbers
 *
 * Return: always 0 (Success)
 *
 */
int main(void)
{

	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
