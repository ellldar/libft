/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 21:53:21 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/01 21:53:31 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char *tmp;

	tmp = ft_strnew(10);
	tmp = ft_memcpy(tmp, "Eldar Supataev", 15);
	ft_putstr(tmp);
	ft_putstr("\n");
	return (0);
}

