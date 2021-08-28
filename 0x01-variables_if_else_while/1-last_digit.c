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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	 printf("Last digit of %d is %d ", n, n % 10);
    if (n % 10 > 5)
        printf("and is greater than 5\n");
    else if (n % 10 == 5)
        printf("and is equal to 5\n");
    else if (n % 10 < 5)
        printf("and is less than 5\n");

	return (0);
}