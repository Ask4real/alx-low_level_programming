#include <stdio.h>

/**
 * main - a program that prints all possible different combinations of
 * two digits
 *Return: Always 0 (success)
 */

int main(void)

{
	int a, b;

	/* setiing the range of the first and second number to be between 0 and 9*/
	for (a = '0'; a <= '9'; a++)
	{
		for (b = '1'; b <= '9'; b++)
		{
			/*make 01 and 10 the same */
			/*print smallest condition of two digits only*/
			/* and skip the combination of 2 same digit*/

			if (a >= b)
				continue;

			putchar(a);
			putchar(b);
			/* stop to print "," and " " to come after the digit*/

			if (a == '8' && b == '9')
				break;

			putchar(',');
			putchar(' ');

		}
	}
		putchar('\n');
		return (0);
}
