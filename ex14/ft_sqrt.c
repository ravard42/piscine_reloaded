int	ft_sqrt(int nb)
{
	int	tmp;

	tmp = 0;
	while ((++tmp) * tmp < nb)
		;
	tmp = (tmp * tmp == nb) ? tmp : 0;
	return (tmp);
}
