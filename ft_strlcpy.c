/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:02:57 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/15 15:23:03 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == '0')
		return (ft_strlen(src));
	while (i < size)
	{
		if (src[i] != '\0' && dst[i] != '\0')
		{
			dst[i] = src[i];
		}
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
int main(void)
{
	char src[] = "Mamawebo";
	char dst[] = "Tontolaba";
	int len = ft_strlcpy(dst,src, 4);
	printf("El string mide %d centimetros", len);
	return(0);
}*/
