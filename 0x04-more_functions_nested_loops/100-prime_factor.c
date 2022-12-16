#include <stdio.h>
#include "main.h"

/**
 * main - Prints all largest prime factor of the numbers 612852475143
 * Return: Always 0 (Success)
 */

int main(void)

{
	long x, maxf;
	long number = 612852475145;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	maxf = number / x;
	}
	}
	printf ("%ld\n", maxf);
	return (0);
}
