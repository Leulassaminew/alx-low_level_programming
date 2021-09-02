#include <stdio.h>
#include "main.h"
int _putchar(char c);
int _islower(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void);
void more_numbers(void);
void print_line(int n);
void print_diagonal(int n);

int main()
{
_islower(78);
_isdigit(49);
printf("%d mul is", mul(3,4));
printf("\n");
print_numbers();
print_most_numbers();
more_numbers();
print_line(5);
print_diagonal(7);

}
