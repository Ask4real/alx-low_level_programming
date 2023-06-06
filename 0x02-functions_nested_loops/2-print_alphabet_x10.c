#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase
 * followed by new line.
 * You can only use _putchar twice in your code
 * Return: Nothing(type void)
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	a = 0;
	/* print from 1-10 */
	while (a <= 9)
	{
		/*print the alphabet */
		for (a = 97; a <= 122; a++)
			_putchar(a);
		_putchar('\n');
		a++;
	}
}
