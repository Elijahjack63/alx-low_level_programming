#include <stdio.h>
/**
 * main - print the lowercase alphabet in reverse
 *
 * Description: using main function
 * this program prints the lowercase alphabet in reverse
 * Return: 0 Always(success)
 */
int main(void)
{
	char c;

	for (c = 'z' ; c >= 'a' ; c--)
{
	putchar(c);
}
putchar('\n');
return (0);
}
