#include "main.h"

/**
 *  rev_string - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */


void rev_string(char *s)
{
int i, j, len;

i = 0;

while (s[i] != '\0')
{
i++;
}

len = i;

for (j = len - 1; j >= 0; j--)
{
_putchar(s[j]);
}
}

