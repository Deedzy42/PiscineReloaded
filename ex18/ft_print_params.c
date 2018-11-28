/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:34:56 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:35:08 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int c;

	i = 1;
	while (i < argc)
	{
		c = 0;
		while (argv[i][c])
			ft_putchar(argv[i][c++]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
