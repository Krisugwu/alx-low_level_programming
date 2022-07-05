#include "main.h"
/**
 * print_sign - print sign number
 * @n: check for sign
 *
 * Return: 1 if n is greater than 0, -1 if its less and 0 if its equal to 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
}
