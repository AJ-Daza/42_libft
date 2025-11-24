/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:53:06 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/20 19:53:06 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void ft_lstclear(t_list **lst, void (*del)(void
*));

Parameters: lst: The address of a pointer to a node.
del: The address of the function used to delete the content of the node.

Return value: None

External functs: free

Description: Deletes and frees the given node and every successor
of that node, using the function ’del’ and free(3). Finally,
the pointer to the list must be set to NULL.
*/