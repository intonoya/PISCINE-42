/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:13:18 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/15 16:12:03 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = -1;
	while (++i <= 98)
	{
		j = i;
		while (++j <= 99)
		{
			ft_putchar ((char)(i / 10) + '0');
			ft_putchar ((char)(i % 10) + '0');
			ft_putchar (' ');
			ft_putchar ((char)(j / 10) + '0');
			ft_putchar ((char)(j % 10) + '0');
			if (i != 98)
			{
				ft_putchar (',');
				ft_putchar (' ');
			}	
		}
	}	
}	
