/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:53:06 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/04/02 15:53:08 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*copy;

	i = 0;
	while (s[i] != '\0')
		i++;
	copy = ft_calloc(i + 1, 1);
	if (copy == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy[i] = f(i, s[i]);
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
