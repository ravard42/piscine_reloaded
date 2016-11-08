# include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ret;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	ret = (int *)malloc(sizeof(int) * len);
	i = -1;
	while (++i < len)
		ret[i] = min + i;
	return (ret);

}
