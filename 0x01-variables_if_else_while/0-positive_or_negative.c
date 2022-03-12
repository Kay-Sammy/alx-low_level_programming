#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Main function
 * Description: program to check if a number is negative, positive or zero
 * Return: ends the program
 */
int main(void)
{
int n;
srand(time(0));

n = rand() - RAND_MAX / 2;
if (n > 0)
{
	printf("%d is possitive\n", n);
}
        else if (n == 0)
{
	printf("%d is zero\n", n);
}
else
{
	printf("%d is negative\n", n);
}
return (0);
