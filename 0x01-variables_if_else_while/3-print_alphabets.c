#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - a program that prints lowercase and uppercase alphabets
 *
 * Return: 0(Success)
 */
int main(void)
{
int m = 97;
int n = 65;
while (m <= 122)
{
putchar(m);
}
while (n <= 97)
{
putchar(n);
}
putchar('\n');
return (0);
}
