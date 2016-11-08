void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}


int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
	}
	return (0);
		
}
