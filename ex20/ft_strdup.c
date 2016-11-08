# include <stdlib.h>

int	ft_strlen(char *s)
{
	int	len;

	len = -1;
	while (s[len++])
		;
	return (len);
}

char	*ft_strdup(char *s)
{
	int	len;
	char	*ret;
	int	i;

	len = ft_strlen(s);
	ret = (char *)malloc(sizeof(char) * (len + 1));
	i = -1;
	while (s[++i])
		ret[i] = s[i];
	ret[i] = '\0';
	return (ret);
}
