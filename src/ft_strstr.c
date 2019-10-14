/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 00:35:24 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 00:35:26 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find)
{
	int	j;

	j = 0;
	if (!*str && !*to_find)
		return ("");
	while (*str)
	{
		j = 0;
		while (to_find[j])
		{
			if (*(str + j) != to_find[j])
				break ;
			j++;
		}
		if (j == ft_strlen(to_find))
			return (str);
		str++;
	}
	return (char*)('\0');
}
