#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
for (char x = 'a'; x <= 'z'; x++)
{
if (x == 'e')
{
x;
}
else if (x == 'q')
{
x;
}
else
{
putchar(x);
}
}
putchar('\n');
return (0);
}
