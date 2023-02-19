#include<stdio.h>
/**
 * main - Enter point
 * Return: o(Success)
 */
int main(void)
{
char x;
for (x = 'a'; x <= 'z'; x++)
{
if (x == 'e' && x == 'q')
putchar(x);
}
putchar('\n');
return (0);
}
