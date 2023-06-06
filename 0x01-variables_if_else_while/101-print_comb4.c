#include <stdio.h>
/**
 * main - it print all possible different combination of three digits,
 *   the three digit must be different.
 * 012, 120, 102, 021, 210 are considered the same combination of the digit 0,1
 *  ,2.
  * print only the smallest combination of three digits and in ascending order.
 * Return: 0
 */
int main(void)
{
	int a, b, c;


	for (a = 48; a <= 57; a++)
	{
		for (b = 49; b <= 57; b++)
		{
			for (c = 50; c <= 57; c++)
			{
				if ((a >= b || b >= c))
				continue;
				putchar(a);
				putchar(b);
				putchar(c);

				if (a == 55)
					break;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
