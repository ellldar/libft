/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 13:38:20 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 13:38:24 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int nb)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!*str && !*to_find)
		return ("");
	else if (*str && !*to_find)
		return (str);
	while (*str && i < nb)
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
		i++;
		str++;
	}
	return (char*)('\0');
}
