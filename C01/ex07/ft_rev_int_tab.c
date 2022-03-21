/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:06:24 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/12 17:17:35 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	r;
	int	swap;

	n = 0;
	r = size - 1;
	while (n < (size / 2))
	{
		swap = tab[n];
		tab[n] = tab[r];
		tab[r] = swap;
		n++;
		r--;
	}
}
/*
int main (void)
{
	int tab[] = {10, 13 ,15 ,17 ,19 ,20};
	int size = 6;
	ft_rev_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	   printf("%d ", tab[i]);
}*/
