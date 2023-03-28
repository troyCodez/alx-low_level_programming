#include "main.h"
/**
 * char *_strcpy - prints string pointedby src
 * @dest:
 * @src:string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for (x = 0; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';

	return (dest);
}
