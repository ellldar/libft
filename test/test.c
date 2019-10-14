/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 13:41:10 by esupatae          #+#    #+#             */
/*   Updated: 2019/09/18 13:41:12 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     main(int argc, char **argv)
{
    char    *src;
    char    *tmp;
    char    *tmp2;
    int     size;

    if (argc == 2)
    {
        // -------------------------------- ft_strlen --------------------------------------------------------
        printf("ft_strlen : '' has %zu characters\n", ft_strlen(""));
        printf("ft_strlen : '%s' has %zu characters\n", argv[1], ft_strlen(argv[1]));

        // -------------------------------- ft_strdup --------------------------------------------------------
        printf("ft_strdup : '%s' copied to ====> '%s'\n", argv[1], ft_strdup(argv[1]));

        // -------------------------------- ft_strcpy --------------------------------------------------------
        printf("ft_strcpy : before copy -> %s\n", tmp);
        size = ft_strlen(argv[1]) + 1;
        tmp = (char*)malloc(sizeof(char) * size);
        tmp = ft_strcpy(tmp, argv[1]);
        printf("ft_strcpy : after copy -> %s\n", tmp);

        // -------------------------------- ft_strncpy -------------------------------------------------------
        printf("ft_strncpy : before copy -> %s\n", tmp2);
        tmp2 = (char*)malloc(sizeof(char) * size);
        tmp2 = ft_strncpy(tmp2, argv[1], 5);
        printf("ft_strncpy : after copy -> %s\n", tmp2);

        // -------------------------------- ft_strcat --------------------------------------------------------
        printf("ft_strcat : %s\n", ft_strcat("Hello", " World!"));

        // -------------------------------- ft_strncat -------------------------------------------------------
        printf("ft_strncat : %s\n", ft_strncat("Hello", " World!", 4));

        // -------------------------------- ft_strstr --------------------------------------------------------
        printf("ft_strstr : Looking for 'dar' in 'Eldarchik' => %s\n", ft_strstr("Eldarchik", "dar"));
        printf("ft_strstr : Looking for 'Bar' in 'Foo Bar Baz' => %s\n", ft_strstr("Foo Bar Baz", "Bar"));
        printf("ft_strstr : Looking for 'Sam' in 'Foo Bar Baz' => %s\n", ft_strstr("Foo Bar Baz", "Sam"));
        printf("ft_strstr : Looking for '' in 'Disco Party' => %s\n", ft_strstr("Disco Party", ""));
        printf("ft_strstr : Looking for 'Hollywood' in '' => %s\n", ft_strstr("Hollywood", ""));
        printf("ft_strstr : Looking for 'Hollywood' in 'Hollywood' => %s\n", ft_strstr("Hollywood", "Hollywood"));
        printf("ft_strstr : Looking for '' in '' => %s\n", ft_strstr("", ""));
    }
    else
        printf("Nothing was passed as a parameter OR too many parameters");
}