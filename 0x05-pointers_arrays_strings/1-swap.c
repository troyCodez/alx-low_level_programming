#include<main.h>
/**
 *swap_int - function that swaps the values of two
 *int values
 *@a: value to swap
 *@b: value to swap
 */


void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = *c;

	return(0)

}
