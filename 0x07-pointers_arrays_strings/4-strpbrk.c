#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - seaerches for bytes in a string
 * @s: input string
 * @accept: match results
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k] ; k++)
		{
			if (*s == accept[k])
				return (s);
		}

		s++;
	}

return ('\0');
}
