/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 22:59:52 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/01 22:59:54 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *str;

	str = ft_memalloc(15);
	str = ft_memcpy(str, "Eldar Supataev", 15);
	ft_putstr(str);
	ft_putstr("\n");
	ft_memdel(&str);
	printf("%s\n", str);
	ft_putstr("\n");
	return (0);
}
