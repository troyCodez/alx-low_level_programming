#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @dest: string input
 * @src: string input
 * @n: interger
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat (dest, src, n);
	return (dest);

}
