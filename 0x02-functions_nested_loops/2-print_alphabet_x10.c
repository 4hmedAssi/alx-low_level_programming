#include "main.h"
/**
 * print_alphabet_x10 - Enter point
 * Return : void
 */
void print_alphabet_x10(void)
{
int x = 1;
while (x <= 10)
{
char a = 'a';
while (a <= 'z')
{
_putchar(a);
a++;
}
x++;
_putchar('\n');
}
}
