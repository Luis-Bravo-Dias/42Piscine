/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 11:05:51 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 14:05:24 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char	*dest, char	*src)
{
	int	n;
	int	n2;

	n = 0;
	n2 = 0;
	while (dest[n] != '\0')
		n++;
	while (src[n2] != '\0')
	{
		dest [n + n2] = src[n2];
		n2++;
	}
	dest[n + n2] = '\0';
	return (dest);
}
/*
int	main()
{
	char test1[100] = "This is ";
	char test2[] = "a test.";

	//strcat(test1, test2);
	ft_strcat(test1, test2);
	printf("%s\n", test1);
	printf("%s\n", test2);
}*/
