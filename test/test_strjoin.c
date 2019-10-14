/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 21:24:01 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/06 21:24:02 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char 	*res;

	res = ft_strjoin("Hello ", "World");
	printf("%s\n", res);
	printf("%s\n", ft_strjoin("Yo ", "Whatsup?"));
	printf("%s\n", ft_strjoin("", "Whatsup?"));
	printf("%s\n", ft_strjoin("Aloha", ""));
	printf("%s\n", ft_strjoin("", ""));
	return (0);
}