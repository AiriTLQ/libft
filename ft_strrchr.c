/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: K4$$ <strykewt@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:23:19 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/16 17:14:31 by K4$$             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	uc;

	i = 0;
	uc = (unsigned char)(c % 256);
	while (s[i] != '\0')
		i++;
	while (i > 0)
	{
		if (s[i] == uc)
			return ((char *)(s + i));
		i--;
	}
	if (s[i] == uc)
		return ((char *)(s + i));
	return (NULL);
}
/*
int main (void)
{
	char s[] = "Tu mama me mima";
	char *result = ft_strrchr(s, 'm');

	if (result != NULL)
		printf("Caracter encontrado en la posicion %ld\n", result - s);
	else
		printf("Caracter no encontrado");
	return (0);
}*/
