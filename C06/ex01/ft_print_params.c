/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 11:04:07 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/22 09:30:22 by lleiria-         ###   ########.fr       */
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

	n1 = 1;
	while (n1 < counter)
	{
		n2 = 0;
		while (arg[n1][n2] != '\0')
		{
			ft_putchar(arg[n1][n2]);
			n2++;
		}
		ft_putchar('\n');
		n1++;
	}
	return (0);
}
