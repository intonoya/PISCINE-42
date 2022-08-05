/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:18:33 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/17 18:32:13 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	a;
	int	det;

	a = -1;
	while (++a < --size)
	{
		det = tab[a];
		tab[a] = tab[size];
		tab[size] = det;
	}
}	
