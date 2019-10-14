/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 22:32:40 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/01 22:32:42 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *tmp;

	tmp = ft_memalloc(10);
	ft_putstr(tmp);
	ft_putstr("\n");
	tmp = ft_memcpy(tmp, "Liana", 5);
	ft_putstr(tmp);
	ft_putstr("\n");
	return (0);
}