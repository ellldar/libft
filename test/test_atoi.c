/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/30 21:27:59 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/30 21:28:01 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(char *str)
{
	int	res1, res2;

	res1 = atoi(str);
	res2 = ft_atoi(str);
	if (res1 != res2)
	{
		printf("IN: \"%s\" | Test --> FAIL!\n", str);
		printf("Standard Atoi Output - %d\n", res1);
		printf("Custom Atoi Output (ft_atoi) - %d\n", res2);
		printf("\n");
	}
}

int	main(void)
{
	int		i;
	char	*tmp;
	char	*chr;

	i = 0;
	tmp = (char*)malloc(10);
	chr = (char*)malloc(2);
	test("    -2342343 asdfasdf ");
	test("\t 1243512352\t666");
	test("-+123456");
	test("    2341234    21341234");
	test("+-123456");
	test("+100000000");
	test("++12345623423");
	test("0000023423400");
	test("100000");
	test("123123eldar");
	test("123123    ");
	test("123123.234    ");
	test("123123,234    ");
	test("123123/234    ");
	test("    123123 ");
	test("    -123123 ");
	test("    -123123.234 ");
	test("    -123123,234 ");
	test("    --123123,234 ");
	test("     ");
	test("asdfasdf");
	test("-234234-");
	test("@#$%@#$%23452345");
	test("23452345@#$%@#$%");
	test("2147483649");
	test("2147483649234234");
	test("-2147483649234234");
	printf("-------------------------------- TESTING WITH CHARACTERS --------------------------\n");
	i = 127;
	while (i < 33 || i == 127)
	{
		*chr = (char)i;
		printf("Char #%i is %s\n", i, chr);
		tmp = ft_strcat(chr, " 123456");
		printf("Testing for -------> '%s'\n", tmp);
		test(tmp);
		if (i == 127)
			i = -1;
		i++;
	}
	return(0);
}

