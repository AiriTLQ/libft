//#include <stdio.h>

char *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((haystack[i + j] == needle[j]) && (i + j) < len && needle[j] != '\0')
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
	char haystack[] = "Tu mama me mima";
	char needle[] = "mama";
	char *resultado = ft_strnstr(haystack, needle, 10);
	if (resultado)
		printf("La palabra \"%s\" se ha encontrado en \"%s\"\n", needle, resultado);
	else
		printf("No se pudo localizar la palabra");
	return (0);
}*/