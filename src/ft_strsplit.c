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

static t_wordloc	*create_elem(void)
{
	t_wordloc	*elem;

	elem = (t_wordloc*)malloc(sizeof(t_wordloc));
	elem->i = 0;
	elem->j = 0;
	elem->next = NULL;
	return (elem);
}

static void			resolve_header(t_wordloc **head, t_wordloc **current)
{
	if (!*head)
	{
		*current = create_elem();
		*head = *current;
	}
	else
	{
		(*current)->next = create_elem();
		*current = (*current)->next;
	}
}

static t_wordloc	*get_coords(char *str, char c)
{
	t_wordloc	*current;
	t_wordloc	*head;
	int			i;
	int			is_word;

	i = 0;
	is_word = 0;
	head = NULL;
	while (*str)
	{
		if ((*str == c || !*(str + 1)) && is_word)
		{
			current->j = *(str + 1) ? i - 1 : i;
			is_word = 0;
		}
		else if (*str != c && !is_word)
		{
			resolve_header(&head, &current);
			current->i = i;
			is_word = 1;
		}
		i++;
		str++;
	}
	return (head);
}

static	int			word_count(t_wordloc *words)
{
	int	n;

	n = 0;
	while (words)
	{
		n++;
		words = words->next;
	}
	n += 1;
	return (n);
}

char				**ft_strsplit(char const *s, char c)
{
	char		**ans;
	char		**ptr;
	t_wordloc	*words;
	t_wordloc	*head;
	int			len;

	len = 0;
	words = get_coords((char*)s, c);
	head = words;
	ans = (char**)ft_memalloc(sizeof(char *) * word_count(words));
	ptr = ans;
	while (words)
	{
		len = words->j - words->i + 2;
		*ptr = ft_strnew((size_t)len);
		*ptr = ft_strcpy(*ptr, ft_strsub(s, words->i, (size_t)(len - 1)));
		words = words->next;
		ptr++;
	}
	ft_listdel(head);
	*ptr = NULL;
	return (ans);
}
