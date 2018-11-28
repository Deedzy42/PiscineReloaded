/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:35:18 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:35:31 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
		i++;
	return (s1[i] - s2[i]);
}

int		main(int argc, char **argv)
{
	int 	i;
	int 	c;
	char 	*b;

	i = 0;
	c = 1;
	while (argv[c + 1])
	{
		if (ft_strcmp(argv[c], argv[c + 1]) > 0)
		{
			b = argv[c];
			argv[c] = argv[c + 1];
			argv[c + 1] = b;
			c = 0;
		}
		c++;
	}
	while (++i < argc)
	{
		c = 0;
		while (argv[i][c])
			ft_putchar(argv[i][c++]);
		ft_putchar('\n');
	}
	return (0);
}
