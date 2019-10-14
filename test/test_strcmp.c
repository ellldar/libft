/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 21:17:39 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 21:17:40 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    testn(char *str1, char *str2, unsigned int nb)
{
    int res1;
    int res2;

    res1 = strncmp(str1, str2, nb);
    res2 = ft_strncmp(str1, str2, nb);
    if (res1 != res2)
    {
        printf("------------  ERROR  -----------------\n");
        printf("Comparing '%s' with '%s' | n = %i ....\n", str1, str2, nb);
        printf("Expected result (strncmp)  => %i\n", res1);
        printf("Actual result (ft_strncmp) => %i\n", res2);
    }
}

void    test(char *str1, char *str2)
{
    int res1;
    int res2;

    res1 = strcmp(str1, str2);
    res2 = ft_strcmp(str1, str2);
    if (res1 && res2)
	{
		printf("Comparing '%s' with '%s'....\n", str1, str2);
		printf("Expected result (strcmp)  => %i\n", res1);
		printf("Actual result (ft_strcmp) => %i\n", res2);
	}
}

int		main(void)
{
//    // --------------------------- ft_strcmp -------------------------
//    test("Hello", "Hello");
//    test("Hello", "Hel");
//    test("Hello", "Helloo");
//    test("Hello there", "Hello");
//    test("Hello there", "");
//    test("", "Hello");
//    test("", "");
//    test("Yonkers", "Toodoo");
//    test("Industrial", "Individual");
//    test("Industrial Individual", "Individual");

//	 --------------------------- ft_strncmp -------------------------
    testn("Hello", "Hello", 5);
    testn("Hello", "Hello", 10);
    testn("Hello", "Hello", 0);
    testn("Hello", "Hello", -5);
    testn("Hello", "Hel", 10);
    testn("Hello", "Hel", 3);
    testn("Hello", "Hel", 0);
    testn("Hello", "Hel", -5);
    testn("Hello", "Helloo", 10);
    testn("Hello", "Helloo", 5);
    testn("Hello", "Helloo", 0);
    testn("Hello", "Hellooo", 10);
    testn("Hello", "Hellooo", 5);
    testn("Hello", "Hellooo", 0);
    testn("Hello", "Hellooo", -3);
    testn("Hello", "Hellooo", -4);
    testn("Hello", "Hellooo", -5);
    testn("Hello", "Hellooo", -6);
    testn("Hello there", "Hello", 20);
    testn("Hello there", "Hello", 5);
    testn("Hello there", "Hello", 0);
    testn("Hello there", "Hello", 10);
    testn("Hello there", "Hello", 5);
    testn("Hello there", "Hello", 0);
    testn("Hello there", "Hello", -3);
    testn("Hello there", "Hello", -4);
    testn("Hello there", "Hello", -5);
    testn("Hello there", "Hello", -6);
    testn("Hello there", "", 20);
    testn("Hello there", "", 1);
    testn("Hello there", "", 0);
    testn("Hello there", "", -5);
    testn("", "Hello", 10);
    testn("", "Hello", 1);
    testn("", "Hello", 0);
    testn("", "Hello", -5);
    testn("", "", 20);
    testn("", "", 1);
    testn("", "", 0);
    testn("", "", -5);
    testn("Yonkers", "Toodoo", 15);
    testn("Yonkers", "Toodoo", 6);
    testn("Yonkers", "Toodoo", 0);
    testn("Yonkers", "Toodoo", -10);
    testn("Industrial", "Individual", 30);
    testn("Industrial", "Individual", 10);
    testn("Industrial", "Individual", 0);
    testn("Industrial", "Individual", -10);
    testn("Industrial Individual", "Individual", 20);
    testn("Industrial Individual", "Individual", 10);
    testn("Industrial Individual", "Individual", 0);
    testn("Industrial Individual", "Individual", -5);

	return (0);
}