/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:30:16 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/22 09:37:43 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	main(int	counter, char **arg)
{
	int	n1;
	int	n2;

	n1 = counter - 1;
	while (n1 > 0)
	{
		n2 = 0;
		while (arg[n1][n2] != '\0')
		{
			ft_putchar(arg[n1][n2]);
			n2++;
		}
		ft_putchar('\n');
		n1--;
	}
	return (0);
}
