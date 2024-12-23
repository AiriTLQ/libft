/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 15:01:10 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/23 09:38:30 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	start_var(int *i, int *j, int *start)
{
	*i = 0;
	*j = 0;
	*start = 0;
}

static char	*fill_word(const char *start, size_t len)
{
	char	*word;

	word = (char *)malloc(len + 1);
	if (!word)
		return (NULL);
	ft_strlcpy(word, start, len + 1);
	return (word);
}

static void	ft_free(char **strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs[i]);
		i++;
	}
	free(strs);
}

static char	**word_split(char const *s, char c, char **result)
{
	int	i;
	int	j;
	int	start;

	start_var(&i, &j, &start);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			start = i;
			while (s[i] && s[i] != c)
				i++;
			result[j] = fill_word(&s[start], i - start);
			if (!result[j])
			{
				ft_free(result);
				return (NULL);
			}
			j++;
		}
		else
			i++;
	}
	result[j] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char		**result;
	size_t		x;
	size_t		count;
	const char	*ptr;

	x = 0;
	count = 0;
	ptr = s;
	while (*ptr)
	{
		if (*ptr != c && x == 0)
		{
			x = 1;
			count++;
		}
		else if (*ptr == c)
			x = 0;
		ptr++;
	}
	result = (char **)malloc((count + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	result = word_split(s, c, result);
	return (result);
}
