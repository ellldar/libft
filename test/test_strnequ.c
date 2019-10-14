/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/04 22:46:10 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/04 22:46:13 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	testn(char *s1, char *s2, size_t n)
{
	printf("Comparing strings '%s' and '%s', n = %zu\t", s1, s2, n);
	if (ft_strnequ(s1, s2, n))
		printf(" ---> EQUAL!!!\n");
	else
		printf(" ---> NOT EQUAL!!!\n");
}

int	main(void)
{
	testn("Hello", "Hello", 5);
	testn("Hello", "Hello", 10);
	testn("Hello", "Hello", 0);
	testn("Hello", "Hel", 10);
	testn("Hello", "Hel", 3);
	testn("Hello", "Hel", 0);
	testn("Hello", "Helloo", 10);
	testn("Hello", "Helloo", 5);
	testn("Hello", "Helloo", 0);
	testn("Hello", "Hellooo", 10);
	testn("Hello", "Hellooo", 5);
	testn("Hello", "Hellooo", 0);
	testn("Hello there", "Hello", 20);
	testn("Hello there", "Hello", 5);
	testn("Hello there", "Hello", 0);
	testn("Hello there", "Hello", 10);
	testn("Hello there", "Hello", 5);
	testn("Hello there", "Hello", 0);
	testn("Hello there", "", 20);
	testn("Hello there", "", 1);
	testn("Hello there", "", 0);
	testn("", "Hello", 10);
	testn("", "Hello", 1);
	testn("", "Hello", 0);
	testn("", "", 20);
	testn("", "", 1);
	testn("", "", 0);
	testn("Yonkers", "Toodoo", 15);
	testn("Yonkers", "Toodoo", 6);
	testn("Yonkers", "Toodoo", 0);
	testn("Industrial", "Individual", 30);
	testn("Industrial", "Individual", 10);
	testn("Industrial", "Individual", 0);
	testn("Industrial Individual", "Individual", 20);
	testn("Industrial Individual", "Individual", 10);
	testn("Industrial Individual", "Individual", 0);
	return (0);
}