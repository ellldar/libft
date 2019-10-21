/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:46:05 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/07 21:46:41 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*add_word(t_list *list, char *str)
{
	t_list	*cur;

	cur = list;
	if (cur)
	{
		while (cur->next)
			cur = cur->next;
		cur->next = ft_lstnew(str, ft_strlen(str));
	}
	else
		cur = ft_lstnew(str, ft_strlen(str));
	return (list ? list : cur);
}

size_t	count_words(t_list *list)
{
	size_t	res;

	res = 0;
	while (list)
	{
		list = list->next;
		res++;
	}
	return (res);
}

char	**assign_words(t_list *list)
{
	size_t	count;
	char 	**ptr;
	char 	**ans;

	count = count_words(list);
	ans = (char**)malloc(sizeof(char*) * count);
	ptr = ans;
	while (list)
	{
		*ptr = ft_strdup(list->content);
		list = list->next;
		ptr++;
	}
	return (ans);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**ans;
	size_t	len;
	t_list	*list;
	char 	*word;
	char	*ptr;

	len = 0;
	list = NULL;
	ptr = s ? (char*)s : NULL;
	while(*ptr)
	{
		while(*ptr && *ptr == c)
			ptr++;
		len = 0;
		while(*ptr && *ptr != c)
		{
			len++;
			ptr++;
		}
		word = ft_strsub((char*)s, (ptr - s - len), len);
		list = add_word(list, word);
	}
	ans = assign_words(list);
	return (ans);
}
