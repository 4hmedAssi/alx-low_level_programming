#include "main.h"
/**
 * print_alphabet_x10 - Enter point
 * Return : void
 */
void print_alphabet_x10(void)
{
for (int x = 1; x <= 10; x++)
{
for (char a = 'a'; a <= 'z' ; a++)
{
_putchar(a);
a++;
}
}
_putchar('\n');
}
