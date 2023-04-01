#include "main.h"
/**
 * reverse_array - reverses an array
 * @a:array input
 * @n:array elements
 * Return: void
 */

void reverse_array(int *a, int n)
{

	int i;
	int j;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}


}

