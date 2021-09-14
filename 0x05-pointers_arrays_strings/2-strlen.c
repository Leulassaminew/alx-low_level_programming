#include "main.h"

/**
 * _strlen - checks for lowercase character
 * @i: the character to check
 * Return: i if c is lowercase, 0 otherwise
 */
int _strlen(char *s)
{
int i;

for (i = 0; s[i] != '\0'; ++i);

return (i);

}
