#include<stdio.h>
#include<stdlib.h>
/**
 * main - a program that prints its name, with a new line.
 * @argc: Counts the number of parameters that go into main
 * @argv: Pointer of array of pointers
 * Return: Always (0)
 */
int main(int argc, char **argv)
{
int i;
if(argc > 0)
{
for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
}
return (0);
}
