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

for (n = '0' ; n >= '9' ; n++)
{
	putchar(n);
}
for (n = 'a' ; n <= 'f' ; n++)
{
	putchar(n);
}
putchar('\n');
return(0);
}
