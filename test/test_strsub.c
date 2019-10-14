/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 23:12:00 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/04 23:12:09 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	char 	*str;
	char	*ptr;

	str = (char*)ft_memalloc(15);
	ft_strcpy(str, "Eldar_Supataev");
	ptr = (char*)ft_memalloc(15);
	ft_strcpy(ptr, "Kalay Jagdaysi");
	printf("Printing a defined string:\n");
	str = ft_strsub(str, 0, 5);
	printf("%s\n", str);
	printf("Printing an undefined string:\n");
	ptr = ft_strsub(ptr, 6, 8);
	printf("%s\n", ptr);
	return (0);
}
