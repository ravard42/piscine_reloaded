int	ft_iterative_factorial(int n)
{
	int	i;
	int	tmp;

	if (n <= 0)
		return (0);
	i = 0;
	tmp = 1;
	while (++i <= n)
		tmp *= i;
	return (tmp);
}
