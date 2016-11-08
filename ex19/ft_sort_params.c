void	ft_putchar(char c);

void	ft_putstr(char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar(s[i]);
}

int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	int		ret;

	i = 0;
	while (!(ret = (unsigned char)s1[i] - (unsigned char)s2[i]) && s1[i] && s2[i])
		i++;
	return (ret);
}

void	ft_sort(int argc, char **argv, int (*ft_strcmp)(char *, char *))
{
	int	i;
	int	action;
	char	*tmp;

	i = 0;
	action = 0;
	while (++i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv[i + 1]) > 0)
		{
			tmp = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = tmp;
			action = 1;
		}
	}
	if (action == 1)
		ft_sort(argc, argv, ft_strcmp);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 1)
		return (0);
	if (argc == 2)
	{
		ft_putstr(argv[1]);
		ft_putchar('\n');
	}
	else
	{
		ft_sort(argc, argv, &ft_strcmp);
		i = 0;
		while (++i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	return (0);	
}
