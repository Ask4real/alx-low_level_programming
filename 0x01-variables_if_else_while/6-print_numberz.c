#include <stdio.h>

/**
 * main - program that prints all single digit numbers of base
 *10 starting from 0
 *
 * Return: Always 0 (succss)
 */

int main(void)

{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
	}

	putchar('\n');

	return (0);
}


