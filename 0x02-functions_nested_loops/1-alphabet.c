#include "main.h"

/**
 * print_alphabet - print the alphabet in lowercase, followed by a new line
 * You are not allow to use the standard library
 * You can only use _putchar twice in your code
 * Return: Nothing  (type void)
 */
void print_alphabet(void)
{
	char a;

	a = 97;
	while (a >= 97 && a <= 122)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
