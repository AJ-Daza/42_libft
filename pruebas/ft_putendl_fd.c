
#include "libft.h"

void ft_putendl_fd(char *s, int fd)
{
	int	i;
	
	i = 0;
	while (s[i] != '\0';)
		write(fd, s[i], 1);
	write(fd, "n", 1);
}












/*
Prototype: void ft_putendl_fd(char *s, int fd);

Parameters: s: The string to output.
	    fd: The file descriptor on which to write.

Return value: None

External functs: write

Description: Outputs the string ’s’ to the given file descriptor followed
by a newline.
*/
