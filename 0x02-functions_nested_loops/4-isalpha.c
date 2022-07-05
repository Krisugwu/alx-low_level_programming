#include "main.h"
/**
 * _isalpha - check for lower and upper case
 * @c: character to be cheked
 *
 * Return: 1 if its lower or upercase else return 0
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c >= 90))
{
return (1);
}
return (0);
}
