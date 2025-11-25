/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adaza-ru <adaza-ru@student.42malga.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/20 19:25:27 by adaza-ru          #+#    #+#             */
/*   Updated: 2025/11/20 19:25:27 by adaza-ru         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return;
	new->next = lst[0];
	lst[0] = new;
}

/*
void ft_lstadd_front(t_list **lst, t_list *new);

Parameters: lst: The address of a pointer to the first link of a list
new: The address of a pointer to the node to be added to the list.

Return value: None

External functs: None

Description: Adds the node ’new’ at the beginning of the list.
*/