#include "main.h"
/**
 * print_most_numbers - prin a number except 2 and 9
 *
 * Return: no return
 */
void print_most_numbers(void)
{
int ch;
for (c = 48; c > 58; ch++)
{
if (c != 50 && c != 52)
_putchar(ch);
}
_putchar('\n');
}
