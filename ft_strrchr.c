/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: K4$$ <strykewt@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 12:23:19 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/14 21:22:39 by K4$$             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i--;
	}
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
