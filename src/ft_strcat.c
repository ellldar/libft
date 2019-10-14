/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:46:26 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/18 23:46:29 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *dest, char *src)
{
	char	*ans;
	int		size;
	int		i;

	i = ft_strlen(dest);
	size = ft_strlen(dest) + ft_strlen(src) + 1;
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
