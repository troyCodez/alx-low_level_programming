#include <stdio.h>
/**
 * main-prints first 50 fibonacci numbers, using 1 and 2 as start
 * separated by a comma followed by a space
 * Return: always 0
 */

int main(void)
{
	int count;
	long A=1, B=2,sum;
	for (count=0;count<50;count++)
	{
		sum=A+B;
		printf("%lu",sum);
		A=B;
		B=sum;

		if(count ==49)
			printf("\n");
		else
			printf(",");

	}

	return(0);
}
