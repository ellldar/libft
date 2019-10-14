/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/10 02:01:13 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/10 02:01:47 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*elem;

	if(!(elem = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	elem->content = content ? (void*)content : NULL;
	elem->content_size = content ? content_size: 0;
	elem->next = NULL;
	return (elem);
}
