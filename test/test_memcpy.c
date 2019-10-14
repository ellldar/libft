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

void	test(char *str1, char *str2, size_t n)
{
	char *s1;
	char *s2;
	char *t1;
	char *t2;

	s1 = (char*)malloc(sizeof(char) * (ft_strlen(str1) + 1));
	s2 = (char*)malloc(sizeof(char) * (ft_strlen(str2) + 1));
	t1 = (char*)malloc(sizeof(char) * (ft_strlen(str1) + 1));
	t2 = (char*)malloc(sizeof(char) * (ft_strlen(str2) + 1));
	ft_strcpy(s1, str1);
	ft_strcpy(s2, str2);
	ft_strcpy(t1, str1);
	ft_strcpy(t2, str2);
	s1 = memcpy(s1, s2, n);
	t1 = ft_memcpy(t1, t2, n);
	printf("\n---> IN: '%s', '%s', %zu ", str1, str2, n);
	printf("\t%s", " ------> ");
	printf("'%s' vs '%s'",  s1, t1);
	printf(" %s\n\n", ft_strcmp(s1, t1) ? "------> BAD!" : "");
	free(s1);
	free(s2);
	free(t1);
	free(t2);
}

int		main(void)
{
	test("Hello", "World", 0);
	test("Hello", "World", 3);
	test("Hello", "World", 5);
	test("Hello", "World", 10);
	test("Hello", "Wonderful", 0);
	test("Hello", "Wonderful", 3);
	test("Hello", "Wonderful", 5);
	test("Hello", "Wonderful", 9);
	test("Hello", "Wonderful", 15);
	test("Hello", "", 0);
	test("Hello", "", 5);
	test("Hello", "", 10);
	test("", "World", 0);
	test("", "World", 5);
	test("", "World", 10);
	test("", "", 0);
	test("", "", 10);
	return (0);
}