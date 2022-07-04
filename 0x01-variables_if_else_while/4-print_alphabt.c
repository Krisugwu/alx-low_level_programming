#include <stdio.h>
/**
* main - print some letter of alphabet
*
* Return: Always (Success)
*/
int main(void)
{
	int c;
	for (c = 'a'; c <= 'z'; c++)
	{
	if (c != 'e' && c != 'q')
		{
		putchar(c);
		}
	}
	putchar(c);
	return (0);
}
