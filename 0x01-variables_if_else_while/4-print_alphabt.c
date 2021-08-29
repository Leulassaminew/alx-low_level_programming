#include <stdio.h>

/**
 * main - prints the phrase with proper grammar,
 * but the outcome is a piece of art,
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
char ch = 'a';

while (ch <= 'z'){
if (ch != 'e' && ch != 'q')
{
putchar (ch);
}
ch++;
putchar ('\n');
}
return (0);
}
