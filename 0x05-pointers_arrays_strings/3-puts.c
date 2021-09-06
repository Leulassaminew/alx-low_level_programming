int _putchar(char c);
/**
 *  _puts- resets n to 98,
 * @str:address of n
 */
int _putchar(char c);
void _puts(char *str)
{
int i;

for (i = 0 ;str[i] != '\0' ; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
