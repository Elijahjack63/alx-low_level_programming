#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: string with a constance byte
 * @n: bytes of the memory area to fll
 * @b: memory to fill
 *
 * Return: The memory area filled
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}

