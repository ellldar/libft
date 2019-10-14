/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/20 22:40:57 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/20 22:40:59 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(char *dst, const char *src, int nb)
{
	size_t	res1, res2;

	res1 = strlcat(dst, src, nb);
	res2 = ft_strlcat(dst, src, nb);
	printf("Length | '%s' ==> %zu\n", dst, ft_strlen(dst));
	printf("Length | '%s' ==> %zu\n", src, ft_strlen((char*)src));
	printf("strlcat(%s, %s, %i) ==> %zu\n", dst, src, nb, res1);
	printf("ft_strlcat(%s, %s, %i) ==> %zu\n\n", dst, src, nb, res2);
}

int		main(void)
{
	int		i;

	i = 0;
	printf("----------------  TEST 1  ----------------------- \n");
	while (i < 6) {
		test("Santa", "Maria", i);
		i++;
	}
	printf("----------------  TEST 2  ----------------------- \n");
	i = 0;
	while (i < 6) {
		test("Santa", "", i);
		i++;
	}
	printf("----------------  TEST 3  ----------------------- \n");
	i = 0;
	while (i < 1) {
		test("", "Maria", i);
		i++;
	}
	return (0);
}
