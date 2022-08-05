/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:14:17 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/17 21:52:09 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	fpc(void)
{
	ft_putchar(',');
	ft_putchar(' ');
}

void	fmk(int *array, int n, int x, int d)
{
	int	max_d;

	while (++x < n)
		array[x] = x;
	while (x > 0)
	{
		max_d = 10;
		x = -1;
		while (++x < n)
			ft_putchar(array[x] + '0');
		x = n;
		while (x--)
		{
			d = array[x];
			if (d < --max_d)
			{
				while (x < n)
					array[x++] = ++d;
				fpc ();
				break ;
			}
		}
	}
}

void	ft_print_combn(int n)
{
	int	array[10];
	int	x;
	int	d;

	d = 0;
	if (n <= 0 || n >= 10)
		return ;
	else
	{
		x = -1;
		fmk (array, n, x, d);
	}
}
