/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 19:15:13 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/03 19:15:15 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef	void	(*t_fptr)(unsigned int, char*);

static void	toup(unsigned int i, char *str)
{
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] -= 32;
}

static void	tolow(unsigned int i, char *str)
{
	if (str[i] >= 'A' && str[i] <= 'Z')
		str[i] += 32;
}

int		main(void)
{
	t_fptr	p_toup, p_tolow;
	char	str[] = "this is an incredible world!";

	p_toup = toup;
	p_tolow = tolow;

	printf("Before:\t %s\n", str);
	ft_striteri(str, p_toup);
	printf("After:\t %s\n", str);
	ft_striteri(str, p_tolow);
	printf("After:\t %s\n", str);
	return (0);
}
