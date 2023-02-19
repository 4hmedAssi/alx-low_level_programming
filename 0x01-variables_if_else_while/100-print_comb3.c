#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
int y;
int x;
for (y = 0; y <= 8; y++)
{
for (x = 1; x <= 9; x++)
{
putchar((y % 10) + '0');
putchar((x++ % 10) + '0');
if (y == 8 && x == 9)
continue;
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
