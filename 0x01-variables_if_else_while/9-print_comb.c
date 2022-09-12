#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int c;

	for (c = 48 ; c < 58 ; c++)
{
	putchar(c);
	if (c != 57)
{
	putchar(',');
	putchar(' ');
}
}
putchar('\n');
return (0);
}
