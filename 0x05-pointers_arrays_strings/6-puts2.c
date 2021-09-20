#include "main.h"

/**
 * puts2 - check the code
 * @str: knjnfnl
 */
void puts2(char *str)
{
int i;
i = 0;

while (str[i] != '\0')
{
_putchar(str[i]);
i = i + 2;
}
}

