#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
int y;
for (y = 0; y <= 9; y++)
{
putchar(48 + y);
if (y <= 8)
{
putchar(',');
putchar(' ');
}
}
putchar (' ');
return (0);
}
