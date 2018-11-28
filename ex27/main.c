/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoachon <amoachon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 17:39:11 by amoachon          #+#    #+#             */
/*   Updated: 2018/11/28 17:39:13 by amoachon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
	int 	fd;
	char	str[1];

	if (argc < 2)
		write(1, "File name missing.\n", 19);
	if (argc > 2)
		write(1, "Too many arguments.\n", 20);
	if (argc != 2)
		return (0);
	fd = open(argv[1], O_RDONLY);
	while (read(fd, str, 1) == 1)
		write(1, &str[0], 1);
	return (0);
}
