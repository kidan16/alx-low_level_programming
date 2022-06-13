/**
 * _strcat- concatenates two strings.
 * @dest: is a string parameter.
 * @src: is a string parameter.
 * Return: char.
 */
char *_strcat(char *dest, char *src)

{
	int l, j;

	l = 0;
	while (dest[l] != '\0')
	{
		l++;
	}

	for (j = 0; src[j] != '\0'; j++, l++)
	{
		dest[l] = src[j];
	}

	dest[l] = '\0';

	return (dest);
}
