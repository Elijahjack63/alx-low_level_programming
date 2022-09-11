#include <stdio.h>
/**
 * main - print all the numbers of base 16 in lowercase
 *
 * Description: using main function
 * this program print all the numbers of base 16
 * Return 0
 */
int main(void)
{
int n;

for (n = 48 ; n < 58 ; n++)
{
	putchar(n);
}
for (n = 'a' ; n < 'g' ; n++)
{
	putchar(n);
}
putchar ('\n');
return(0);
}
