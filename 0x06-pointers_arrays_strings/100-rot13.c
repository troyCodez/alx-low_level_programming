#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes to rot13
 * @str: input string
 * Return:str value
 */
char *rot13(char *str)
{
	int i;
	int j;
	char data[] = "QAZXSWEDCVFRTGBNHYUJMKILOPpoiuytrewqasdfghjklmnbvcxz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (s[i] == data[j])
			{
				s[i] = datarot[j];
				break;
			}
		}
	}
	return (str);
}
