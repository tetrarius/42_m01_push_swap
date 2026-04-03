/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aravakia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/19 12:47:25 by aravakia          #+#    #+#             */
/*   Updated: 2026/02/19 13:25:46 by aravakia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp_next;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp_next;
	}
	*lst = NULL;
	return ;
}
