/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsuphasa <nsuphasa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/08 17:13:27 by nsuphasa          #+#    #+#             */
/*   Updated: 2023/03/12 00:55:17 by nsuphasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
*************************************************************************
DESCRIPTION
add new node at the beginning of the list
*************************************************************************
RETURN
none
*************************************************************************
EXPLANATION
	new->next = *lst; // join list to node
	*lst = new; // make new node as head
*/
