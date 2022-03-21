/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/19 14:23:19 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 15:19:57 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int size)
{
	unsigned int	n;
	unsigned int	lendest;
	unsigned int	lensrc;

	n = 0;
	lendest = ft_strlen(dest);
	lensrc = ft_strlen(src);
	if (size == 0)
		return (lensrc);
	while ((src[n] != '\0') && ((lendest + n) < (size - 1)))
	{
		dest[lendest + n] = src[n];
		n++;
	}
	dest[lendest + n] = '\0';
	if (size > lendest)
		return (lendest + lensrc);
	return (size + lensrc);
}
/*
int main(void)
{
	char src[10] = "ab";
	char dest[10] = "123";
	
	printf("Str: %lu\n", strlcat(dest, src, 2));
	printf("Str: %d", ft_strlcat(dest, src, 2));
	return (0);
}*/
