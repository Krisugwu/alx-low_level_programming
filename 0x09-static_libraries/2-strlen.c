#include "main.h"
/**
 * _strlen - return lenght of a string
 * @s:input of string
 * Return: lenght of string
 */
int _strlen(char *s)
{
int len = 0;
while (*s++)
len++;
return (len);
}
