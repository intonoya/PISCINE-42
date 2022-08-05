/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:33:24 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/17 20:16:53 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	b;
	int	a;

	l = 0;
	while (l < size - 1)
	{
		b = 0;
		while (b < size - l -1)
		{
			if (tab[b] > tab[a + 1])
			{
				a = tab[b];
				tab[b] = tab[b + 1];
				tab[b + 1] = a;
			}
			b++;
		}
		l++;
	}
}
