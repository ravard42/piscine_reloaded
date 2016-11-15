#include "display_file.h"

int	main(int argc, char **argv)
{
	int 	fd;
	int	ret;
	char	buf[BUFF_SIZE + 1];

	if (argc == 1)
		FM;
	else if (argc != 2)
		WARG;
	else
	{
		fd = open(argv[1], O_RDONLY);
		while ((ret = read(fd, buf, BUFF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(1, buf);
		}
		close(fd);
	}
	return (0);
}
