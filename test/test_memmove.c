/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/29 18:02:22 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/29 18:02:24 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(void *dst, const void *src, size_t n)
{
	char	*ptr1;
	char	*ptr2;

	ptr1 = (char*)(malloc(sizeof(dst) + 1));
	ptr2 = (char*)(malloc(sizeof(dst) + 1));
	ft_strcpy(ptr1, dst);
	ft_strcpy(ptr2, dst);
	ptr1 = memmove(ptr1, src, n);
	ptr2 = ft_memmove(ptr2, src, n);
	printf("IN: '%s', '%s', %zu\t", dst, src, n);
	printf("-----> '%s' vs '%s'\n\n", ptr1, ptr2);
}

int		main(void)
{
	test("Arman", "World", 0);
	test("Arman", "World", 3);
	test("Arman", "World", 5);
	test("Arman", "World", 10);
	test("Arman", "", 0);
	test("Arman", "", 2);
	test("Arman", "", 5);
	test("Arman", "", 10);
	test("", "World", 0);
	test("", "World", 2);
	test("", "World", 5);
	test("", "World", 10);
	test("", "", 0);
	test("", "", 5);
	test("", "", 10);
	test("This is incredible", "World", 0);
	test("This is incredible", "World", 5);
	test("This is incredible", "World", 15);
	test("This is incredible", "World", 25);
	return (0);
}