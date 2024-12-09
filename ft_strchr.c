/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: airdomin <airdomin@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/09 11:24:00 by airdomin          #+#    #+#             */
/*   Updated: 2024/12/09 12:23:08 by airdomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (char *)(s + i);
		i++;
	}
	if (s[i] == c)
		return (char *)(s + i);
	return NULL;
}
/*
int main (void)
{
	char s[] = "Tu mama me mima";
	char *result = ft_strchr(s, 'm');

	if (result != NULL)
		printf("Caracter encontrado en %ld\n", result - s);
	else
		printf("Caracter no encontrado");
	return (0);
}*/
