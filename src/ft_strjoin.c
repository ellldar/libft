/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 21:23:53 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/06 21:23:54 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ans;
	size_t	size;

	size = ft_strlen((char*)s1) + ft_strlen((char*)s2) + 1;
	ans = ft_strnew(size);
	ans = ft_strcat((char*)s1, (char*)s2);
	return (ans);
}
