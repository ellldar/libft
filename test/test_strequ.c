/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 22:27:50 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/04 22:28:01 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(char *s1, char *s2)
{
	printf("Comparing strings '%s' and '%s'\t", s1, s2);
	if (ft_strequ(s1, s2))
		printf(" ---> EQUAL!!!\n");
	else
		printf(" ---> NOT EQUAL!!!\n");
}

int	main(void)
{
	test("Hello", "World");
	test("Hello", "Hello");
	test("Helloo", "Hello");
	test("Hello", "Helloo");
	test("Hello", "Hellow");
	test("Hellow", "Hello");
	test("Hellow", "");
	test("", "Hellow");
	test("", "");
	return (0);
}

