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
