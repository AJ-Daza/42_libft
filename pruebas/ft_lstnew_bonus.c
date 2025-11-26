/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:22:46 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/20 19:22:46 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
t_list *ft_lstnew(void *content);

Parameters: content: The content to create the node with.

Return value: The new node

External functs: malloc

Description: Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with the value 
of the parameter ’content’. The variable ’next’ is initialized
to NULL.
*/
