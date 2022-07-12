#include "main.h"
/**
 * _strlen - return lenght of a string
 * @s:input of string
 * Return: lenght of string
 */
int _strlen(char *s)
{
int l = 0;
while (*s != '\0')
{
s++;
l++;
}
return (l);
}
