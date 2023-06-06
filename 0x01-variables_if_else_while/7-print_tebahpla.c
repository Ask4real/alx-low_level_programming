#include <stdio.h>

/**
 * main - a program that prints the lowercase alphabet
 * in reverse
 * Return: Always 0 (success)
 */

int main(void)

{
	char a = 'a';

	for (a = 'z'; a>= 'a'; a--)
	{
		putchar(a);
	}
		putchar('\n');

	return (0);
}
