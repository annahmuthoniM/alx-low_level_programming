#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - ...
 * @s1: ...
 * @s2: ...
 * @n: ...
 * Return: ...
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, l = 0, m = 0, o = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s1[m])
		m++;
	if (n >= m)
		o = i + m;
	else
		m = i + n;
	str = malloc(sizeof(char) * o + 1);
	if (str == NULL)
		return (NULL);
	m = 0;
	while (l < o)
	{
		if (l <= i)
			str[l] = s1[l];
		if (l >= i)
		{
			str[l] = s2[m];
			m++;
		}
		l++;
	}
	str[l] = '\0';
	return (str);
}
