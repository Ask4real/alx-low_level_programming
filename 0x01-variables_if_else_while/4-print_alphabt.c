#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)

	if (ch != 'e' && ch != 'q')
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}

