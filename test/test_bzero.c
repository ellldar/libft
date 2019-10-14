/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test1.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/22 23:47:00 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/22 23:47:02 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	size_t size  = 5;
	char str1[12] = "hello world";
	char str2[12] = "hello world";

	printf("Before : str1 - %s\n", str1);
	printf("Before : str2 - %s\n", str2);
	bzero(str1, 5);
	ft_bzero(str2, 5);
	printf("After : str1 - %s\n", str1);
	printf("After : str2 - %s\n", str2);
	return (0);
}