#include "main.h"
/**
 * _strncat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * @n : int parameter
 * Return: *dest
 */
char *_strncat(char *dest, char *src, int n)
{
int count = 0, count2 = 0;
while (*(dest + count) != '\0')
{
count++;
}
while (count2 >= 0)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
return (dest);
}
