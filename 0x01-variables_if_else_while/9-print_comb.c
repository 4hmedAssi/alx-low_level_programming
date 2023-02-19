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
if(y <= 9)
{
putchar(48 + y);
putchar(',');
}
putchar(' ');
}
putchar (' ');
return (0);
}
