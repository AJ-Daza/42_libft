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
//#include <stdio.h>

static void	copy_string(char const *s, char *fsbranch, size_t i, char c)
{
	size_t	j;
	size_t	n;
	size_t	b;

	j = 0;
	n = 0;
	b = 0;
	while (s[n] != '\0' && j <= i)
	{
		if (j == i && s[n] != c)
		{
			fsbranch[b] = s[n];
			b++;
		}
		else if (s[n] == c && s[n + 1] != c)
			j++;
		n++;
	}
	fsbranch[b] = '\0';
}

static size_t	length(char const *s, size_t i, char c)
{
	size_t	len;
	size_t	j;
	size_t	n;

	n = 0;
	j = 0;
	len = 0;
	while (s[n] != '\0' && j <= i)
	{
		if (j == i && s[n] != c)
			len++;
		else if (s[n] == c)
			j++;
		n++;
	}
	return (len);
}

static size_t	how_many_cs(char const *s, char c)
{
	size_t	hmchar;
	size_t	len;

	hmchar = 0;
	len = 0;
	while (s[len] != '\0')
	{
		if (s[len] == c && s[len + 1] != c)
			hmchar++;
		len++;
	}
	return (hmchar);
}

char	**ft_split(char const *s, char c)
{
	char	**fs;
	size_t	l;
	size_t	i;

	l = how_many_cs(s, c);
	fs = ft_calloc((l + 2), sizeof(char *));
	if (fs == NULL)
		return (NULL);
	fs[l + 1] = NULL;
	i = 0;
	while (i < l + 1)
	{
		fs[i] = ft_calloc(length(s, i, c) + 1, 1);
		if (fs[i] == NULL)
		{
			while (i > 0)
				free(fs[--i]);
			free (fs);
			return (NULL);
		}
		copy_string(s, fs[i], i, c);
		i++;
	}
	return (fs);
}

/*
int	main(void)
{
	char *s = "Almendrerro de Dorraemon que florece en la serie de Doraemon";
	char x = 'r';
	char	**ns = ft_split(s, x);
	int i = 0;
	
	printf("Number of delimiters: %li\n",how_many_cs(s, x));
	while(ns[i] != NULL)
	{
		printf("%s\n", ns[i]); 
		i++;	
	} 
	return (0);
}
*/

/*
Function name: ft_split

Prototype: char **ft_split(char const *s, char c);

Parameters: s:The string to be split.
	    c: The delimiter character.

Return value: The array of new strings resulting from the split.
NULL if the allocation fails.

External functs: malloc, free

Description: Allocates (with malloc(3)) and returns an array of strings
obtained by splitting ’s’ using the character ’c’ as a delimiter.
The array must end with a NULL pointer.
*/
