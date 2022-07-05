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
for (c = '0'; c <= '99'; c++)
{
for (i = '0'; i <= '99'; i++)
{
putchar(c);
putchar(i);
if ((c != '99') || (c == '99' && i != '99'))
{
putchar(',');

putchar(' ');
}
}
}
putchar('\n');
return (0);
}
