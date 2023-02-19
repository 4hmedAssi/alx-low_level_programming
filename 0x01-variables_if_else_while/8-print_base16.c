#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
int y;
char x;
for (y = 0; y <= 9; y++)
{
putchar(48 + y);
}
for (x = 'a'; x <= 'f'; x++)
{
putchar(x);
}
putchar('\n');
return (0);
}
