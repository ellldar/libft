/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 02:03:32 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/12 02:03:52 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*to_upper(t_list *lst)
{
	t_list	*ans;
	char	*str;
	char	*ptr;
	int 	i;

	i = 0;
	str = ft_strnew(lst->content_size);
	ptr = lst->content;
	while (*ptr)
		str[i++] = ft_toupper(*ptr++);
	ans = ft_lstnew(str, ft_strlen(str));
	return (ans);
}

void	print_list(t_list *lst)
{
	while(lst)
	{
		printf("%s\n", lst->content);
		lst = lst->next;
	}
}

int		main(void)
{
	t_list	*my_list;
	t_list	*ptr;

	my_list = ft_lstnew("Hello", 6);
	ptr = my_list;
	my_list->next = ft_lstnew("World", 6);
	my_list = my_list->next;
	my_list->next = ft_lstnew("Trade", 6);
	my_list = my_list->next;
	print_list(ptr);
	print_list(ft_lstmap(ptr, &to_upper));
	return (0);
}

