/**
 * _strpbrk - a function that searches a string for any a set of bytes
 * @s: pointer to point string
 * @accept: pointer to string we are searching for in @s
 *
 * Retunr: pointer to the bytes in @s or NULl if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
