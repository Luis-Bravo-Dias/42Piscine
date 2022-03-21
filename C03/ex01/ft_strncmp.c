/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 15:19:08 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 13:46:09 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
/*
int	main(void)
{
	char test1[] = "abcd";
	char test2[] = "abCd";
	char test3[] = "abcd";
	char test4[] = "abce";
	char test5[] = "abcefg";
	char test6[] = "abT";

	printf("%d\n", ft_strncmp(test1, test2, 3));//positivo
	printf("%d\n", ft_strncmp(test1, test3, 3));//zero
	printf("%d\n", ft_strncmp(test1, test4, 3));//zero
	printf("%d\n", ft_strncmp(test1, test5, 0));//zero
	printf("%d\n", ft_strncmp(test1, test6, 2));//zero
	
	printf("\n");

	printf("%d\n", strncmp(test1, test2, 3));//positivo
	printf("%d\n", strncmp(test1, test3, 3));//zero
	printf("%d\n", strncmp(test1, test4, 3));//zero
	printf("%d\n", strncmp(test1, test5, 0));//zero
	printf("%d\n", strncmp(test1, test6, 2));//zero
}*/
