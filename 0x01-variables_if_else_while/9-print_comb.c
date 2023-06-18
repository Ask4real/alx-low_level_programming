#include <stdio.h>

/**
 * main - a program that prints all possible combination of single digits
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	/*declaration of variable*/
	int a;

	/*print number in ascending order*/

	for (a = 0; a <= 9; a++)
	{
		putchar(a);
		if (a == 9)
		{
			break;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}

