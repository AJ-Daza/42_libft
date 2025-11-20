/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/18 18:45:37 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/18 18:45:53 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

static int	compare(char const c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

static size_t	start(char const *s1, char const *set)
{
	size_t	i;

	i = 0;
	while (compare(s1[i], set) == 1)
		i++;
	return (i);
}

static size_t	end(char const *s1, char const *set)
{
	size_t	i;
	size_t	e;

	i = 0;
	e = 0;
	while (s1[i])
	{
		if (compare(s1[i], set) == 0)
			e = i;
		i++;
	}
	if (e != 0)
		return (e + 1);
	else
		return (i);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	cstart;
	size_t	cend;
	char	*ns;

	if (!s1)
		return (NULL);
	if (!set)
		return ((char *)s1);
	i = 0;
	cstart = start(s1, set);
	cend = end(s1, set);
	if (cend > cstart)
		ns = malloc(cend - cstart + 1);
	else
		ns = malloc(1);
	if (!ns)
		return (NULL);
	while (i < (cend - cstart))
	{
		ns[i] = s1[cstart + i];
		i++;
	}
	ns[i] = '\0';
	return (ns);
}

/*
int	main(void)
{
	printf("ababcdcadcba, ab: %s\n\n", ft_strtrim("ababcdcadcba", "ab"));

	printf("abababab, ab: %s\n\n", ft_strtrim("abababab", "ab"));
	
	printf("12321, ab: %s\n\n", ft_strtrim("12321", "ab"));

	printf("12321, : %s\n\n", ft_strtrim("12321", ""));

	printf(", ab: %s\n\n", ft_strtrim("", "ab"));
	
	printf("abcdba, abc: %s\n\n", ft_strtrim("abcdba", "abc"));
	return (0);
}
*/

/*
Function name: ft_strtrim

Prototype: char *ft_strtrim(char const *s1, char const *set);

Parameters: s1: The string to be trimmed.
set: The reference set of characters to trim.

Return value: The trimmed string. NULL if the allocation fails.

External functs: malloc

Description: Allocates (with malloc(3)) and returns a copy of ’s1’ with
the characters specified in ’set’ removed from the beginning and
the end of the string
*/