
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	
	i = 0;
	while (s[i] != '\0')
	{
		s[i] = f(i, s[i]);
		i++;
	}
}

/*
Function name: ft_strtrim

Prototype: void ft_striteri(char *s, void (*f)(unsigned int, char*));

Parameters: s: The string on which to iterate.
	    f: The function to apply to each character.

Return value: None

External functs: None

Description: Applies the function ’f’ on each character of the string passed
as argument, passing its index as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/
