#include <stdio.h>

/**
 * main - prints the phrase with proper grammar,
 * but the outcome is a piece of art,
 * Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
char ch;

for (ch = 'a'; ch <= 'z'; ch++)
{
putchar (ch);
}
putchar ('\n');
for (ch = 'A'; ch <= 'Z'; ch++)
{
putchar (ch);
}
putchar ('\n');

return (0);
}
