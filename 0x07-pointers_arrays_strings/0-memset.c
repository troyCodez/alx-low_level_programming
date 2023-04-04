#include "main.h"
#include <stdio.h>
/**
 * _memset - function fills memory with n byte
 * @n:input byte
 * @s:strating adrress
 * @b:output results
 * Return: array with new values
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0 ; n > 0 ; i++)
	{
		s[i] = b;

		n--;
	}

	return (s);

}
