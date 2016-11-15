#include "display_file.h"

void	ft_putchar(int fd, char c)
{
	write(fd, &c, 1);
}

void	ft_putstr(int fd, char *s)
{
	int	i;

	i = -1;
	while (s[++i])
		ft_putchar(fd, s[i]);
}
