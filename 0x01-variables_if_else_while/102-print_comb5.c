#include <stdio.h>

/**
 * main - prints all possible combination of two two-digit numbers.
 * numbers range from 0-99.
 * All numbers should be printed with two digits. 1 should be printed as 01.
 * The combination of numbers should be printed in ascending order.
 * 00 01 and 01 00 are consider thesame combination of the numbers 0 and 1.
 * Return: 0
 */
int main(void)
{
	int a, b;

	/* set the range of value for (1st, 2nd, 3rd, 4th)digit */
	for (a = 0; a < 100; a++)
	{
		for (a = 0; a < 100; a++)
		{
			/* check if (a is less than b) digit */
			/*if YES print the digit*/
			if (a < b)
			{
				putchar((a / 10) + 48);
				putchar((a % 10) + 48);
				putchar(' ');
				putchar((b / 10) + 48);
				putchar((b % 10) + 48);
				/* Don't print ',' & ' ' at the last counts*/
				if (a != 98 || a != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
