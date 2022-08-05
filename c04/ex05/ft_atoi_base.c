/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 20:31:45 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/24 20:31:52 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	srav_base(char c, char *base);
int	ft_atoi(char *str, char *base, int ba);
int	check_base(int ba, char *base);

int	ft_atoi_base(char *str, char *base)
{
	int	ba;

	ba = 0;
	ba = check_base(ba, base);
	if (ba == 0)
		return (0);
	return (ft_atoi(str, base, ba));
}

int	check_base(int ba, char *base)
{
	int	x;
	int	y;

	ba = 0;
	while (base[ba] != '\0')
		ba++;
	if (ba == 0 || ba == 1)
		return (0);
	x = 0;
	while (x < ba)
	{
		if (base[x] < 33 || base[x] > 126)
			return (0);
		if (base[x] == '-' || base[x] == '+')
			return (0);
		y = x;
		while (++y < ba)
		{
			if (base[x] == base[y])
				return (0);
		}
		x++;
	}
	return (ba);
}

int	ft_atoi(char *str, char *base, int ba)
{
	int	min;
	int	i;
	int	rez;

	rez = 0;
	i = 0;
	min = 1;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
		i++;
	while (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-')
			min = -min;
	while (srav_base(str[i], base) != -1)
		rez = rez * ba + srav_base(str[i++], base);
	return (rez * min);
}

int	srav_base(char c, char *base)
{
	int	i;

	i = -1;
	while (base[++i] != '\0')
		if (c == base[i])
			return (i);
	return (-1);
}
