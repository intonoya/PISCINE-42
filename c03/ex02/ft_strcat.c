/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: intonoya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 19:58:46 by intonoya          #+#    #+#             */
/*   Updated: 2022/02/20 19:58:52 by intonoya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int				i;
	unsigned int	c;

	i = 0;
	c = 0;
	while (dest[c] != '\0')
	{
		c++;
	}
	while (src[i] != '\0')
	{
		dest[c] = src[i];
		i++;
		c++;
	}
	dest[c] = '\0';
	return (dest);
}
