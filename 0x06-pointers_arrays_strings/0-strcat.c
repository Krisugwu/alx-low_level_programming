#include "main.h"
/**
 * _strcat - two words
 * @dest : pointer to char param
 * @src : pointer to char param
 * Return: *dest
 */
char *_strcat(char *dest, char *src)
{
int m;
int i;
m = 0;
for (i = 0; i < 1000; c++)
{
if (dest[i] == '\0')
{
break;
}
m++;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[m + i] = src[i];
}
dest[m + i] = '\0';
return (dest);
}
