/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 11:44:53 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/17 12:43:29 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	size_t	size;
	size_t	src_len;

	src_len = ft_strlen(s);
	size = (src_len + 1);
	ptr = (char *)malloc(size);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy (ptr, s, size);
	return (ptr);
}
