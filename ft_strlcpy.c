/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 15:02:57 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/04 17:09:27 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	size;

	size = 0;
	while(src[i] != '\0')
	{
		while(i <= size)
		{
			dst[i] = src[i];
			len++;
		}
	}
	return(0);
}

int main(void)
{
	const char *src;
	char *dst;
	size_t size;

	dst = "uuuuuu";
	src = "copia";
	size = '3';
	ft_strlcpy(src, dst);
	printf("%s");
	return(0);
}
