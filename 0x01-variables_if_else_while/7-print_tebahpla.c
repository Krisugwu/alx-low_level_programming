#include <stdio.h>
/**
 * main - alphabet in opposit direction
 *
 * Return: Always (Success)
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
{
putchar(c);
}
putchar('\n');
return (0);
}
