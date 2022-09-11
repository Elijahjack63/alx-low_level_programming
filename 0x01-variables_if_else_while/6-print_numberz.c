#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10
 *
 * Description: using main function
 * this program prints all single digit numbers of base
 *Return: 0
 */
int main(void)
{
	int n;

	for (n = '0' ; n < '9' ; n++)
{
	putchar(n);
}
putchar('\n');
return (0);
}
