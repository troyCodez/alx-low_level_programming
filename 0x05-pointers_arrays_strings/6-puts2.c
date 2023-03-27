#include "main.h"
/**
 * puts2 - prints the first element in 
 * a string
 *@str: the string
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int i;

	while(*y != '\n')
	{
		y++;
		len++;

	}

	t = len - 1;
	for (i = 0;i <= t; i++)

	{
		if(i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}

	_putchar('\n');
}
