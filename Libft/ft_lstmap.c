/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlahorba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 16:12:02 by vlahorba          #+#    #+#             */
/*   Updated: 2018/11/30 12:05:46 by vlahorba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;

	if (lst != NULL && f != NULL)
	{
		list = f(lst);
		if (list != NULL || lst->next != NULL)
			list->next = ft_lstmap(lst->next, f);
		return (list);
	}
	return (NULL);
}
