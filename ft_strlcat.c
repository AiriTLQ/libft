/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: K4$$ <strykewt@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 10:22:45 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/14 21:22:06 by K4$$             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && j <= size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	return (strlen(dst));
}
/*
int main(void)
{
	char src[] = "Mamawebo";
	char dst[] = "Mimawebos";
	int len = ft_strlcat(src, dst, 4);
	printf("El string destino ahora mide %d centimetros", len);
	return (0);
}*/
