/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 10:07:19 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/15 13:10:05 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		if (haystack[i] == needle[0])
		{
			j = 0;
			while ((haystack[i + j] == needle[j]) && (i + j) < len
				&& needle[j] != '\0')
				j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int main (void)
{
	char haystack[] = "Tu mama me mima";
	char needle[] = "mama";
	char *resultado = ft_strnstr(haystack, needle, 10);
	if (resultado)
		printf("Palabra encontrada en \"%s\"\n", needle, resultado);
	else
		printf("No se pudo localizar la palabra");
	return (0);
}*/
