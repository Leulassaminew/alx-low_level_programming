#include "main.h"
/**
 * _isalpha - check the code
 *
 * Return: int.
 * @c: First operand
 */
int _isalpha(int c)
{
if (c > 64 && c < 91)
{
return (1);
}
else if (c > 97 && c < 122)
{
return (1);
}
else
{
return (0);
}
}
