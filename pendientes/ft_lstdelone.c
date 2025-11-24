/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:32:15 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/20 19:32:15 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void ft_lstdelone(t_list *lst, void (*del)(void *));

Parameters: lst: The node to free.
del: The address of the function used to delete the content.

Return value: None

External functs: free

Description: Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given as a parameter
and free the node. The memory of ’next’ must not be freed.
*/