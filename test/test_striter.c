/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 15:29:16 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/02 15:29:19 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef	void	(*t_fptr)(char*);

static void	toup(char *str)
{
	char	*c;

	c = &(*str);
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
}

static void	tolow(char *str)
{
	char	*c;

	c = &(*str);
	if (*c >= 'A' && *c <= 'Z')
		*c += 32;
}

int		main(void)
{
	t_fptr	p_toup, p_tolow;
	char	*str;

	p_toup = toup;
	p_tolow = tolow;

	str = ft_memalloc(12);
	str = ft_strcpy(str, "Hello world");
	printf("Before: %s\n", str);
	ft_striter(str, p_toup);
	printf("After: %s\n", str);
	ft_striter(str, p_tolow);
	printf("After: %s\n", str);
	return (0);
}
