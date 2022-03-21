/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 16:16:02 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 14:16:51 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	n;
	unsigned int	n2;

	n = 0;
	n2 = 0;
	while (dest[n] != '\0')
		n++;
	while (src[n2] != '\0' && n2 < nb)
	{
		dest[n] = src[n2];
		n2++;
		n++;
	}
	dest[n] = '\0';
	return (dest);
}
/*
int	main()
{
	char test1[100] = "This is ";
	char test2[] = "a test.";

	//strncat(test1, test2, 3);
	ft_strncat(test1, test2, 3);
	printf("%s\n", test1);
	printf("%s\n", test2);
}*/
