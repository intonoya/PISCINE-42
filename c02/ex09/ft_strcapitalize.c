/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 20:36:04 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/23 18:25:11 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	s;

	i = -1;
	while (str[++i] != '\0')
	{
		s = str[i - 1];
		if (s < 48 || ('9' < s && s < 'A')
			|| ('Z' < s && s < 'a') || ('z' < s))
		{
			if ('a' <= str[i] && str[i] <= 'z')
				str[i] -= 32;
		}
		else if ('A' <= str[i] && str[i] <= 'Z')
			str[i] += 32;
	}
	return (str);
}	
