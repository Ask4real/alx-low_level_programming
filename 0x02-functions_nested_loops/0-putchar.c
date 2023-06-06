#include "main.h"

/**
 * main - it print "_putcahr" followed by a new line
 * Return: 0
 */
int main(void)
{
	int a;

	char b[] = "_putchar";

	a = 0;
	while (b[a] != '\0')
	{
		_putchar(b[a]);
		a++;
	}
	_putchar('\n');
	return (0);
}
