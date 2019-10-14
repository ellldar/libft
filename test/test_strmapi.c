/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 21:09:15 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/04 21:09:16 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef	char (*t_func)(unsigned int, char);

static char	toup(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(void)
{
	t_func	myfunc;

	myfunc = toup;
	printf("%s\n", ft_strmapi("Hello world!", myfunc));
	return (0);
}