
#include "libft.h"

char 	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char	*copy;
	
	i = 0;
	while (s[i] != '\0')
		i++;
	copy = malloc(i);
	if (copy == NULL)
		return (NULL);
	copy = (char *)s;
	i = 0;
	while (copy[i] != '\0')
	{
		copy[i] = f(i, copy[i]);
		i++;
	}
	return (copy);
}

/*
Prototype: char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

Parameters: s: The string on which to iterate.
	    f: The function to apply to each character.

Return Value:The string created from the successive applications of ’f’.
Returns NULL if the allocation fails.

External functss: malloc

Description: Applies the function ’f’ to each character of the string ’s’,
and passing its index as first argument to create a new string (with
malloc(3)) resulting from successive applications of ’f’.
*/
