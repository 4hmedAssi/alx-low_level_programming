#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @c: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int c)
{
c = c % 10;
if (c < 0)
{
c = c * -1;
}
_putchar(c + '0');
return (c);
}
