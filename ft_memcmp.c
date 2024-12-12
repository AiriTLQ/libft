/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:10:08 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/12 12:42:46 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	str1 = (const unsigned char *) s1;
	str2 = (const unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}
/*
int main (void)
{
	const char str1[] = "Tu mama me mima";
	const char str2[] = "Tu mama te mima";
	int resultado1 = ft_memcmp(str1, str2, 5);
	int resultado2 = ft_memcmp(str1, str2, 10);
	if (resultado1 != 0)
		printf("Diferencia: %d\n", resultado1);
	else
		printf("Son iguales\n");
	if (resultado2 != 0)
		printf("Diferencia: %d\n", resultado2);
	else
		printf("Son iguales\n");
}*/