/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 19:14:30 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/29 19:14:32 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	*s2;

	s1 = memchr(s, c, n);
	s2 = ft_memchr(s, c, n);
	printf("IN: '%s', '%c', %zu \t", s, (unsigned char)c, n);
	printf("--------> '%s' vs '%s'\n\n", s1, s2);
}

int		main(void)
{
	test(":(){ :|: & };:", '\xde', 15);
//	test("Curriculum", 'u', 0);
//	test("Curriculum", 'u', 5);
//	test("Curriculum", 'u', 7);
//	test("Curriculum", 'u', 12);
//	test("Hello", 'c', 0);
//	test("Hello", 'c', 1);
//	test("Hello", 'c', 5);
//	test("Hello", 'c', 10);
//	test("Hello", 'o', 0);
//	test("Hello", 'o', 1);
//	test("Hello", 'o', 5);
//	test("Hello", 'o', 10);
//	test("Hello", 'e', 0);
//	test("Hello", 'e', 2);
//	test("Hello", 'e', 4);
//	test("Hello", 'e', 5);
//	test("Hello", 'e', 10);
//	test("Hello", '\0', 0);
//	test("Hello", '\0', 1);
//	test("Hello", '\0', 5);
//	test("Hello", '\0', 6);
//	test("Hello", '\0', 10);
//	test("", '\0', 0);
//	test("", '\0', 1);
//	test("", '\0', 5);
//	test("", 'e', 0);
//	test("", 'e', 1);
//	test("", 'e', 5);
	return (0);
}