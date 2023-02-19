#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
int y;
int x, z;
for (y = 0; y <= 7; y++)
{
for (x = y + 1; x <= 8; x++)
{
for (z = x + 1; z <= 9; z++)
{
putchar((y % 10) + '0');
putchar((x % 10) + '0');
putchar((z % 10) + '0');
if (y == 7 && x == 8 && z == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
}
}
putchar ('\n');
return (0);
}
