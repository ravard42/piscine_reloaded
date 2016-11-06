void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (div)
		*div = a / b;
	if (mod)
		*mod = a % b;
}
