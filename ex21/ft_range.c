/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:35:38 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:35:41 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int i;
	int *str;

	i = 0;
	while (i < (max - min))
		i++;
	if (!(str = (int*)malloc(sizeof(str) * i)))
		return (0);
	i = 0;
	while (min < max)
		str[i++] = min++;
	return (str);
}
