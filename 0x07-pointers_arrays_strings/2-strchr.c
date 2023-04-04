#include "main.h"
#include <stdio.h>
/**
 * _strchr - locates character in string
 * @s:string
 * @c:first occurence of character
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (0);
}
