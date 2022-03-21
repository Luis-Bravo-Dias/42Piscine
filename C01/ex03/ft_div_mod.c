/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 16:45:37 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/12 17:07:32 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int main (void)
{
	int a = 15;
	int b = 10;
	int div = 0;
	int mod = 0;

	ft_div_mod(a ,b ,&div ,&mod);
	printf("%d\n%d", div, mod);
}*/
