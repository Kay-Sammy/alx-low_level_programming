#include <stdio.h>
/**
 * main - Main function
 * Description: program to printall single digit base 10 numbers
 * Return: prints the numbers
 */
int main(void)
{
int ch;
for (ch = '0'; ch <= '9'; ch++)
{
putchar(ch);
if (ch == '9')
{
break;
}
putchar(',');
putchat(' ');
}
putchar('\n');
return	(0);
}
