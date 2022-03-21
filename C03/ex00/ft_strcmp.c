/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:37:52 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/19 13:38:26 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char	*s1, char	*s2)
{
	int	n;

	n = 0;
	while (s1[n] == s2[n] && s1[n] != '\0' && s2[n] != '\0')
		n++;
	return (s1[n] - s2[n]);
}
/*
int	main(void)
{
	char test1[] = "abcd";
	char test2[] = "abCd";
	char test3[] = "abcd";
	char test4[] = "abce";
	char test5[] = "abcdefg";
	char test6[] = "abc";

	printf("%d\n", ft_strcmp(test1, test2));
	printf("%d\n", ft_strcmp(test1, test3));
	printf("%d\n", ft_strcmp(test1, test4));
	printf("%d\n", ft_strcmp(test1, test5));
	printf("%d\n", ft_strcmp(test1, test6));
}*/
