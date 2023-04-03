#include "main.h"
/**
 * _memset - sets memory to array
 * @s: array to set
 * @b: value to set
 * @n: amount of times
 * Description: fills memory s with byte b for n amount
 * Return: char value of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i=0; i<n; i++)
	{
		s[i] = b;
	}
	return(s);
}
