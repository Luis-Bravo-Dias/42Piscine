/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 13:53:58 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/22 10:22:48 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	comp;

	comp = 0;
	while (s1[comp] != '\0' && s2[comp] != '\0' && s1[comp] == s2[comp])
		comp++;
	return (s1[comp] - s2[comp]);
}

void	ft_print_params(int ac, char **av)
{
	int	param;

	param = 1;
	while (param < ac)
	{
		ft_putstr(av[param]);
		ft_putchar('\n');
		param++;
	}
}

int	main(int	counter, char **arg)
{
	int		n;
	char	*swap;

	n = 1;
	if (counter > 1)
	{
		while (n < counter - 1)
		{
			if (ft_strcmp(arg[n], arg[n + 1]) > 0)
			{
				swap = arg[n];
				arg[n] = arg[n + 1];
				arg[n + 1] = swap;
				n = 0;
			}
			n++;
		}
		ft_print_params(counter, arg);
	}
	return (0);
}
