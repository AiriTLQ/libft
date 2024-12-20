#include "libft.h"

char	**ft_split(char const *s, char c)
{

}

int	word_count(char const *str, char c)
{
	int		x;
	int		count;

	x = 0;
	count = 0;
	while (*str)
	{
		if (*str != c &&  x == 0)
		{
			x = 1;
			count++;
		}
		else if (*str == c)
			x = 0;
		str++;
	}
	return (count);
}

char	*fill_word(const char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(str)
}