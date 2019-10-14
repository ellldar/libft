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

void	test(char *str1, char *str2, int c, size_t n)
{
	char *s1;
	char *t1;

	s1 = (char*)malloc(ft_strlen(str1) + 1);
	t1 = (char*)malloc(ft_strlen(str1) + 1);
	ft_strcpy(s1, str1);
	ft_strcpy(t1, str1);
	s1 = memccpy(s1, str2, c, n);
	t1 = ft_memccpy(t1, str2, c, n);
	printf("\n---> IN: '%s', '%s', '%c', %zu \t", str1, str2, (unsigned char)c, n);
	if (s1)
		printf("-----> '%s' vs '%s' %s\n", s1, t1, ft_strcmp(s1, t1) ? " \t--------> BAD!!!" : "");
	else
		printf("-----> One of the parameters is NULL!\n");
	if (s1 && !s1[0])
		free(s1);
	if (t1 && !t1[0])
		free(t1);
}

int		main(void)
{
	test("Wonderful World", "Incredible", 'a', 5);
	test("Wonderful World", "Incredible", 'x', 5);
	test("Wonderful World", "Incredible", 'd', 5);
	test("Wonderful World", "Incredible", 'e', 5);
	test("Wonderful World", "Work", 'k', 0);
	test("Wonderful World", "Work", 'k', 2);
	test("Wonderful World", "Work", 'k', 3);
	test("Wonderful World", "Work", 'k', 4);
	test("Wonderful World", "Work", 'k', 15);
	test("Wonderful World", "Eldar", 'r', 0);
	test("Wonderful World", "Eldar", 'r', 1);
	test("Wonderful World", "Eldar", 'r', 5);
	test("Wonderful World", "Eldar", 'r', 15);
	test("Sex", "Eldar", 'r', 15);
	return (0);
}