/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 16:07:36 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/12 16:07:49 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	unsigned int	i;
	char			*str;

	i = 0;
	while (src[i])
		i++;
	if (!(str = (char*)malloc(sizeof(str) * i + 1)))
		return (0);
	i = 0;
	while (src[i])
		str[i] = src[i++];
	str[i] = '\0';
	return (str);
}
