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

void	test(char *str, int c)
{
	char	x;

	x = (char)c != '\0' ? (char)c : '\0';
	printf("strchr(%s, %c)    -->  %s\n", str, x, strrchr(str, c));
	printf("ft_strchr(%s, %c) -->  %s\n", str, x, ft_strrchr(str, c));
}

int		main(void)
{
	test("Elrdarasdfrdfdf", 'r');
	test("Eldar", 'l');
	test("Eldar Supataev", 'S');
	test("Eldar Supataev", 'a');
	test("Eldar Supataev", 'x');
	printf("strchr('Eldar', '')    -->  %s\n", strrchr("Eldar", '\0'));
	printf("ft_strchr('Eldar', '') -->  %s\n", ft_strrchr("Eldar", '\0'));
	return (0);
}
