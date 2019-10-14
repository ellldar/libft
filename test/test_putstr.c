/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/01 17:54:14 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/01 17:54:16 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	int		i;
	char	*chr;
	char	*tmp;

	i = 0;
	chr = (char*)malloc(2);
	tmp = (char*)malloc(20);
	ft_putstr("Hello World!\n");
	i = 127;
	while (i < 33 || i == 127)
	{
		*chr = (char)i;
		tmp = ft_strcat(" Wonderful World! ", chr);
		tmp = ft_strcat(chr, tmp);
		printf("Size: %zu\n", ft_strlen(tmp));
		ft_putstr("Testing for -------> ");
		ft_putstr(tmp);
		ft_putstr("\n");
		if (i == 127)
			i = -1;
		i++;
	}
	return (0);
}