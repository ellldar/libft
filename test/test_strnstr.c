/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 14:40:22 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/19 14:40:24 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     err;
int     errn;

void    test_str(char *longstr, char *shortstr)
{
    char    *exp;
    char    *res;

    exp = strstr(longstr, shortstr);
    res = ft_strstr(longstr, shortstr);
    if (exp != res)
    {
        printf("------------------ Error ----------------------\n");
        printf("Searching for '%s' in '%s'\n", longstr, shortstr);
        printf("Expected behavior  (strstr) ==> %s\n", exp);
        printf("Actual behavior (ft_strstr) ==> %s\n", res);
        err++;
    }
}

void    test_strn(char *longstr, char *shortstr, int nb)
{
    char    *exp;
    char    *res;

    exp = strnstr(longstr, shortstr, nb);
    res = ft_strnstr(longstr, shortstr, nb);
    if (exp != res)
    {
        printf("------------------ Error ----------------------\n");
        printf("Searching for '%s' in '%s', size = %i\n", longstr, shortstr, nb);
        printf("Expected behavior  (strnstr) ==> %s\n", exp);
        printf("Actual behavior (ft_strnstr) ==> %s\n", res);
        errn++;
    }
}

int main(int argc, char **argv)
{
    err = 0;
    errn = 0;

    test_str("Quiet Harbor", "Ha");
    test_str("Quiet Harbor", "Ma");
    test_str("Quiet Harbor", "Logical Interpolation");
    test_str("Quiet Harbor", "");
    test_str("", "Logical Interpolation");
    test_str("", "");
    if (err == 0)
    {
        printf("\n--------------- TEST --------------------\n\n");
        printf("ft_strstr - All is good!\n\n");
    }

    test_strn("Quiet Harbor", "Ha", 15);
    test_strn("Quiet Harbor", "Ha", 5);
    test_strn("Quiet Harbor", "Ha", 0);
    test_strn("Quiet Harbor", "", 50);
    test_strn("Quiet Harbor", "", 5);
    test_strn("Quiet Harbor", "", 0);
    test_strn("Quiet Harbor", "", -5);
    test_strn("Quiet Harbor", "Logical Interpolation", 25);
    test_strn("Quiet Harbor", "Logical Interpolation", 5);
    test_strn("Quiet Harbor", "Logical Interpolation", 0);
    test_strn("Quiet Harbor", "Logical Interpolation", -5);
    test_strn("", "Logical Interpolation", 0);
    test_strn("", "Logical Interpolation", 5);
    test_strn("", "Logical Interpolation", 50);
    test_strn("", "Logical Interpolation", -5);
    test_strn("", "", 0);
    test_strn("", "", 15);
    test_strn("", "", -5);
    if (errn == 0)
    {
        printf("--------------- TEST --------------------\n\n");
        printf("ft_strnstr - All is good!\n\n");
        printf("-----------------------------------------\n");
    }
}
