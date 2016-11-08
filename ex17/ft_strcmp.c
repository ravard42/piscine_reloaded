int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	ret;

	i = 0;
	while(!(ret = ((unsigned char)s1[i] - (unsigned char)s2[i]))
		&& s1[i] && s2[i])
		++i;
	return (ret);
}
