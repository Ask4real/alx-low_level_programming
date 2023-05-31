#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and uppercase
 * 
 * Return: Always 0 (Success)
 */

int main(void)

{
        char ch = 'a';
	char xh = 'A';

        
	for (ch = 'a'; ch <= 'z'; ch++)
        {      
	       	putchar(ch);
        }
   	
	for (xh = 'A'; xh <= 'Z'; xh++)
	{
		putchar(ch);
	}
       	putchar('\n');
        return (0);
}
