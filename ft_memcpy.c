/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:16:02 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/04 17:31:04 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	
	i = 0;
	while (dest[i] != '\0' && src[i] != '\0')
	{
		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	}
	return(dest);
}

int	main(void)
{
	unsigned char src;
	unsigned char dest;
	int n;

	src = "Copia";
	dest = "Delete";
	n = 5;
	ft_memcpy(src, dest);
	printf("Resultado: %s", dest);
}
