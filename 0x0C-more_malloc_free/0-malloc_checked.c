#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

/**
 *  function that allocates memory using malloc
 *  @malloc_checked: function that cause normal process termination
 *  @malloc: function that alocate memory
 *  @b: the memory that is pointing
 *
 *  Return: Always success.
 */
void *malloc_checked(unsigned int b);
{
	void *p

	p = malloc(b);
	if (p == NULL)
	{
	exit(98);
	}

	return (p);
}
