/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 17:53:51 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/20 19:33:03 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char	*str, char	*to_find)
{
	int	n1;
	int	n2;

	n1 = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[n1] != '\0')
	{
		n2 = 0;
		while (str[n1 + n2] == to_find[n2])
		{
			if (to_find[n2 + 1] == '\0')
				return (&str[n1]);
			n2++;
		}
		n1++;
	}
	return (0);
}
/*
int	main()
{
	char	test1[] = "Where is the neddle ?";
	char	test2[] = "neddle";
	char	test3[] = "batata";
	char	*result1;
	char	*result2;
	char	*result3;
	char	*result4;

	result1 = strstr(test1, test2);
	result2 = strstr(test1, test3);
	result3 = ft_strstr(test1, test2);
	result4 = ft_strstr(test1, test2);

	printf("%s\n", result1);
	printf("%s\n", result2);

	printf("%s\n", ft_strstr(test1, test2));
	printf("%s\n", ft_strstr(test1, test3));
}*/
