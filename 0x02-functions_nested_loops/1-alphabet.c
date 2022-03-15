#include <stdio.h>
/**
 * main - Main function
 * Description: program that prints the lowercase. followed by a new line
 * Return: prints the numbers
 */
int main(void)
{
	char ch;

	ch = 'a';

	while	( ch <=	'z')
	{
		_putchar(ch);
		ch++;
	}
		_putchar('\n');
	return	(0);
}
