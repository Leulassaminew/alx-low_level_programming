#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - assigns a random number to int n everytime and compares last digit to 5
 * it executes, and prints it
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 lastDigit = n % 10;
	 if (n > 5)
		printf("%d is greater than 5\n", n);
	else if (n == 5)
		printf("%d is equal to 5\n", n);
	else if (n < 5)
		printf("%d is less than 5\n", n);

	return (0);
}
