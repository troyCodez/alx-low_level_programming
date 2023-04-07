#include "main.h"
int sroots(int, int);
/**
 *_sqrt_recursion - recursion of sqaure root
 *@n:input value
 *Return:squre root
 */
int _sqrt_recursion(int n)
{
	return (sroots(n, 1));
}

/**
 * sroots - ietrates to obtain square
 *@i:iterations
 *@n:input value
 *Return:sqaure
 */

int sroots(int n, int i)
{
	int square = i *i;

	if (square > n)
		return (-1);
	if (square == n)
		return (n);


	return (sroots(n, i + 1));
}
