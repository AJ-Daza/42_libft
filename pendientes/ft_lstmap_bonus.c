/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 20:09:46 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/20 20:09:46 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

Parameters: lst: The address of a pointer to a node.
f: The address of the function used to iterate on the list.
del: The address of the function used to delete the content of a node if needed.

Return value: The new list. NULL if the allocation fails.

External functs: malloc, free

Description: Iterates the list ’lst’ and applies the function ’f’
on the content of each node. Creates a new list resulting of the
successive applications of the function ’f’. The ’del’ function is
used to delete the content of a node if needed.
*/