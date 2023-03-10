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
(void) argv;
printf("%i\n", argc - 1);
return (0);
}
