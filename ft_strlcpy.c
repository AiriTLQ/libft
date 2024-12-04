#include <string.h>
#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size;

	size = 0;
	while(src[len] != '\0')
	{
		while(len <= size)
		{
			dst = src;
			len++;
		}
	}
	return(0);
}

int main(void)
{
	const char *src;
	char *dst;
	size_t size;

	dst = "uuuuuu";
	src = "copia";
	size = '3';
	printf(ft_strlcpy(dst, src));
}
