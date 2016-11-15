#ifndef DISPLAY_FILE_H
# define DISPLAY_FILE_H

# include <unistd.h>
# include <fcntl.h> 

# define FM ft_putstr(2, "File name missing.\n")
# define WARG ft_putstr(2, "Too many arguments.\n")
# define BUFF_SIZE 42

void	ft_putstr(int fd, char *s);

#endif
