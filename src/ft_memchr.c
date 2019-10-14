/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:10:27 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/29 19:10:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*str;

	str = &(*s);
	while ((*str || *str == '\0') && n-- > 0)
	{
		if (*str == (unsigned char)c)
			return ((void *)str);
		str++;
	}
	return (0);
}
