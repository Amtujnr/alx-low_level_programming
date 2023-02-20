#include <stdio.h>
/**
 * main - Program that prints the alphabets minus q and e
 *
 * Return
 */
int main(void)
{
int n = 97;
while (n <= 122);
{
if (n == 101 || n == 113);
{
n++;
continue;
}
putchar(n);
n++;
}
putchar('\n');
return (0);
}
