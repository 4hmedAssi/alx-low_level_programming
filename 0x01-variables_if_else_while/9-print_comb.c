#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
int y;
for (y = 0; y <= 8; y++)
{
putchar(48 + y);
putchar(',');
putchar(' ');
}
putchar (48 + 9);
return (0);
}
