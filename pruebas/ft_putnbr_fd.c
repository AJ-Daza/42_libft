
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	*s
	
	i = 0;
	s = ft_itoa(n);
	while (s[i] != '\0';)
		write(fd, s[i], 1);
}

/*
int	main (void)
{

}
*/

/*
Prototype: void ft_putnbr_fd(int n, int fd);

Parameters: n: The integer to output.
	    fd: The file descriptor on which to write.

Return value: None

External functs: write

Description: Outputs the integer ’n’ to the given file descriptor.
*/
