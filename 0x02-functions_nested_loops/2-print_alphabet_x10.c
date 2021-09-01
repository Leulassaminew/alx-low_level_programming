 #include "main.h"
#include <stdio.h>

int main (void)
{
char ch;
int i;

for (i = 0 ;i <= 9 ;i++)
{
for (ch = 'a' ;ch <= 'z' ; ch++)
{
putchar(ch);
}
putchar('\n');
}
}
