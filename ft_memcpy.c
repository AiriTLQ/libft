/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: K4$$ <strykewt@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:16:02 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/16 17:23:19 by K4$$             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;	
	size_t				i;

	d = dest;
	s = src;
	i = 0;
	if (dest == NULL || src == NULL)
		return (NULL);
	if (n == 0)
		return (dest);
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char src[] = "Copy";
	char dest[] = "Mamawebo";

	ft_memcpy(dest-2, src, 4);
	printf("%s\n", dest);
}*/
