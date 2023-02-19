#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Enter point
 * Return:0 (Sccess)
 */
int main(void)
{
int n;
int b;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
b = n;
n = n % 10;
printf("Last digit of %d is %d and is greater than 5\n", b, n);
}
else if (n == 0)
{
b = n;
n = n % 10;
printf("Last digit of %d is %d and is 0\n", b, n);
}
else if (n < 6 && n != 0)
{
b = n;
n = n % 10;
printf("Last digit of %d is %d and is less than 6 and not 0\n", b, n);
}
return (0);
}
