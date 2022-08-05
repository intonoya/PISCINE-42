dslf'ptuy'rerregtstr[]i/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:28:05 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/24 20:29:05 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> 

int	ft_atoi(char *str)
{
	int	g;
	int	i;
	int	t;

	t = 0;
	i = 0;
	g = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			g = -g;
	while (str[i] >= '0' && str[i] <= '9')
		t = t * 10 + (str[i++] - 48);
	return (t * g);
}
