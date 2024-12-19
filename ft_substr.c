/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:37:09 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/19 10:56:53 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	char	*ptr;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	src_len = ft_strlen(s);
	if (start >= src_len || len == 0)
		return ((char *)ft_calloc(1, 1));
	if (start + len > src_len)
		len = src_len - start;
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (i < len)
	{
		ptr[i] = s[start + i];
		i++;
	}
	ptr[len] = '\0';
	return (ptr);
}
