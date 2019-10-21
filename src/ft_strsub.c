/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 23:08:21 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/04 23:08:23 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*ans;
	char	*ptr;
	size_t	i;

	i = (size_t)start;
	ans = ft_memalloc(len + 1);
	if (i + len <= ft_strlen((char*)s))
	{
		if (ans && (ptr = ans))
		{
			while (i < start + len)
				*ptr++ = s[i++];
			*ptr = '\0';
		}
		else
			return (NULL);
	}
	return (ans);
}
