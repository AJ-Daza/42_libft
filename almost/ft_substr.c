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

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ns;
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	if (i > start && len > (i - start))
		len = (i - start);
	if (i < start)
		len = 0;
	ns = malloc(len + 1);
	if (ns == NULL)
		return (NULL);
	i = 0;
	while (i < len && s[i + start] != '\0')
	{
		ns[i] = s[i + start];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

/*
Function name: ft_substr

Prototype: char *ft_substr(char const *s, unsigned int start, size_t len);

Turn in files: -

Parameters: s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.

Return value: The substring. NULL if the allocation fails.

External functs: malloc

Description: Allocates (with malloc(3)) and returns a substring from the string
’s’. The substring begins at index ’start’ and is of maximum size ’len’.
*/