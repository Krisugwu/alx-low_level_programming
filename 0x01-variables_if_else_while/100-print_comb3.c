#include <stdio.h>
/**
 * main - combination of digit
 *
 * Return: Always (Success)
 */
int main(void)
{
int c, i;
c = i = '0';
for (c = '0'; c <= '8'; c++)
{
for (i = '0'; i <= '9'; i++)
{
putchar(c);
putchar(i);
if ((c != '8') || (c == '8' && i != '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
