/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 11:04:04 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/19 13:51:42 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*s2;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = (ft_strlen(s1));
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	s2 = (char *)malloc(end - start + 1);
	if (s2 == NULL)
		return (NULL);
	ft_strlcpy(s2, &s1[start], (end - start + 1));
	return (s2);
}
