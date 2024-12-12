/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 09:50:05 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/12 12:42:31 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*src;
	unsigned char		byte;
	size_t				i;

	src = (const unsigned char *)s;
	byte = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (src[i] == byte)
			return ((void *)(src + i));
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
	const char s[] = "Mamawebo";
	void *result = ft_memchr(s, 'o', 4);
	
	if (result != NULL)
		printf("Byte encontrado en %ld\n", (char *) result - s);
	else
		printf("No se encontró el byte");
	return (0);
}*/