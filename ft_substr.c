/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 12:37:09 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/17 12:53:25 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	src_len;
	char	*ptr;
	
	src_len = ft_strlen(s);
	if (s == NULL|| len == 0)
		return (NULL);
	if (src_len < start)
		return (NULL);
	ptr = (char *)malloc(s);
	if (ptr == NULL)
		return (NULL);
}