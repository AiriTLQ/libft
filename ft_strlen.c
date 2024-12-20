/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: K4$$ <strykewt@hotmail.com>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:17:02 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/20 14:01:16 by K4$$             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

int	ft_strlen(const char *s)
{
	unsigned int	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*
int main(void)
{
	const char *s = "Mamawebo";
	int len = ft_strlen(s);
	printf("Hay %d caracteres", len);
}*/
