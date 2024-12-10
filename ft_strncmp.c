#include <stdio.h>

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

int main (void)
{
	char str1[] = "Mamawebo";
	char str2[] = "Mimawebo";
	int result = ft_strncmp(str1, str2, 2);
	printf("Diferencia: %d\n", result);
}
