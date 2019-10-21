/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 21:20:40 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/06 21:20:42 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_whitespace(char c)
{
	return (c == ' ' || c == '\n' || c == '\t');
}

char		*ft_strtrim(char const *s)
{
	char	*tmp;
	char	*ans;
	size_t	i;
	size_t	j;

	tmp = (char*)s;
	i = 0;
	j = ft_strlen(tmp) - 1;
	while (is_whitespace(tmp[i]))
		i++;
	if (i == ft_strlen((char*)s))
		return ("");
	while (is_whitespace(tmp[j]))
		j--;
	if (!(ans = ft_strnew(j - i + 2)))
		return (NULL);
	ans = ft_strsub(tmp, (int)i, j - i + 1);
	return (ans);
}
