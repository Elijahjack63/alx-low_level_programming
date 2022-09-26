#include "main.h"

/**
 * _memset - memory with a constant byte
 * @s: - string with a constance byte
 * @n: bytes of the memory area to fll
 * @b: memory to fill
 * Return: Always (0)
 */
char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

