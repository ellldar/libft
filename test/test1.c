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

int		ft_toupper(int c);
int		ft_strlen(char *str);

int		main(int argc, char **argv)
{
	int		size;
	char	*tmp1;
	char	*tmp2;
	int		i;

	i = 0;
	printf("Input: %s\n", argv[1]);
	size = ft_strlen(argv[1]) + 2;
	tmp1 = (char*)malloc(sizeof(char) * size);
	tmp2 = (char*)malloc(sizeof(char) * size);
	if (argc == 2)
	{
		while(*argv[1])
		{
			tmp1[i] = (char)toupper(*argv[1]);
			tmp2[i] = (char)ft_toupper(*argv[1]);
			argv[1]++;
			i++;
		}
		tmp1[i] = '\0';
		tmp2[i] = '\0';
		printf("toupper    -> %s\n", tmp1);
		printf("ft_toupper -> %s\n", tmp2);
	}
	else
	{
		printf("No paramenters or too many parameters");
	}
	return (0);
}
