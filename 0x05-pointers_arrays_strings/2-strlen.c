#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: the character to check
 * Return: 1 if c is lowercase, 0 otherwise
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; ++i);
return (i);

}
