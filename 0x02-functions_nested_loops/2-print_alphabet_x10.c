#include "main.h"

/**
* print print_alphabet_x10 - prints 10 times the alphabet, in lowercase
* followed by a new line
*/

void print_alphabet_x10(void)
{
	int i;
	char ch;

	for (i = 1; i <= 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
