/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lleiria- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 14:53:38 by lleiria-          #+#    #+#             */
/*   Updated: 2021/07/12 17:39:33 by lleiria-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int	*tab, int size)
{
	int	n;
	int	swap;

	n = 0;
	while (n < (size - 1))
	{
		if (tab[n] > tab[n + 1])
		{
			swap = tab[n];
			tab[n] = tab[n + 1];
			tab[n + 1] = swap;
			n = 0;
		}
		else
			n++;
	}
}
/*
int main (void)
{
	int tab[] = {10, 24 ,15 ,37 ,19 ,1};
	int size = 6;
	ft_sort_int_tab(tab, size);
	for (int i = 0; i < size; i++)
	   printf("%d. ", tab[i]);
}*/
