#include "main.h"
#include <stdio.h>
/**
 * _memscpy - copies memory area
 * @n:input byte
 * @dest:destination
 * @src:where it is copied from
 * Return: copied memeory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r;
	int i = n;

	for (r = 0; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}

	return (dest);
}
