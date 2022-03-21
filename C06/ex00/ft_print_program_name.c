/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/16 09:50:00 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/22 10:27:44 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int	argc, char **argv)
{
	argc = 0;
	while (argv[0][argc] != '\0')
	{
		ft_putchar(argv[0][argc]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
