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
	size_t res1, res2;
	char *ans1 = (char *) malloc(nb);
	char *ans2 = (char *) malloc(nb);

	ft_strcpy(ans1, dst);
	ft_strcpy(ans2, dst);
	res1 = strlcat(ans1, src, nb);
	res2 = ft_strlcat(ans2, src, nb);
	printf("BUFF_SIZE = %i\n", nb);
	printf("---------------------------------\n");
	printf("strlcat\t\t -> %s | %zu vs %zu\n", ans1, res1, strlen((char*)ans1));
	printf("ft_strlcat\t -> %s | %zu vs %zu\n\n", ans2, res2, ft_strlen((char*)ans2));
}

int		main(void)
{

	return (0);
}
