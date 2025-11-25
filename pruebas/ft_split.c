/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:53:06 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/25 15:47:36 by adaza-ru         ###   ########.fr       */
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
	while(s[n] != '\0' && s[n] == c)
		n++;
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
	size_t	j;
	size_t	l;
	size_t	n;

	j = 0;
	l = 0;
	n = 0;
	while(s[j] != '\0' && n < i)
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0' && s[j] != c)
			n++;
		while (s[j] != '\0' && s[j] != c)
		{
			if (n == (i + 1))
				l++;
			j++;
		}
	}
	return (l);
}

static size_t	how_many_strings(char const *s, char c)
{
	size_t	hms;
	size_t	j;

	hms = 0;
	j = 0;
	while(s[j] != '\0')
	{
		while (s[j] != '\0' && s[j] == c)
			j++;
		if (s[j] != '\0' && s[j] != c)
			hms++;
		while (s[j] != '\0' && s[j] != c)
			j++;
	}
	return (hms);
}

char	**ft_split(char const *s, char c)
{
	char	**fs;
	size_t	l;
	size_t	i;

	l = how_many_strings(s, c);
	fs = ft_calloc((l + 1), sizeof(char *));
	if (fs == NULL)
		return (NULL);
	fs[l] = NULL;
	i = 0;
	while (i < l)
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
	char *s = "rrrAlmendrerro de Dorraemon que florece en la serie de Doraemonrrr";
	char x = 'r';
	char	**ns = ft_split(s, x);
	int i = 0;
	
	printf("Number of strings: %zu\n",how_many_strings(s, x));
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
