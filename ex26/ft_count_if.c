/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:36:52 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:39:00 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int(*f)(char*))
{
	int i;
	int c;

	i = 0;
	c = 0;
	while (tab[i] != 0)
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
