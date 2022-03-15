#include <stdio.h>
/** main- Main function
 * Description: Program that prints putchar
 * Return : 0
 */
int main(void)
{
	char ermais[] = "_putchar";

	int c;

	for (c = 0; c < 8; c++)
	{
		_putchar(ermais[c]);
	}
return	(0);
}
