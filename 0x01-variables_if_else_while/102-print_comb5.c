#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
int y;
int x;
for (y = 0; y <= 98; y++)
{
for (x = y + 1; x <= 99; x++)
{

putchar((y / 10) + '0');
putchar((y % 10) + '0');
putchar(' ');
putchar((x / 10) + '0');
putchar((x % 10) + '0');
if (y == 98 && x == 99)
{
continue;
}
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
