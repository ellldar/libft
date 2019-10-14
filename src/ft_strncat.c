/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 00:01:44 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 00:01:46 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, char *src, int nb)
{
	char	*ans;
	int		size;
	int		i;

	i = ft_strlen(dest);
	size = ft_strlen(dest) + ft_strlen(src) - nb + 1;
	ans = (char*)malloc(sizeof(char) * size);
	ans = ft_strcpy(ans, dest);
	while (i < size)
	{
		ans[i] = src[i - ft_strlen(dest)];
		i++;
	}
	ans[i] = '\0';
	return (ans);
}
