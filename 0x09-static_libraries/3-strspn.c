#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: input string
 * @accept: substring to match
 *
 * Return: the number of bytes in the initial segment of @s
 *         which consist only of bytes from @accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
	{
		if (s[i] == accept[j])
		{
			count++;
			break;
		}
	}

		if (accept[j] == '\0')
		{
		break;
		}
	}

	return (count);
}
