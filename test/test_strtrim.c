/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 21:20:53 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/06 21:20:54 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	printf("Answer: %s\n", ft_strtrim("    Hello World    \n"));
	printf("Answer: %s\n", ft_strtrim("     Bishkek    Kyrgyz    Generation      \n"));
	printf("Answer: %s\n", ft_strtrim("Bishkek    Kyrgyz    Generation      \n"));
	printf("Answer: %s\n", ft_strtrim("     Bishkek    Kyrgyz    Generation\n"));
	printf("Answer: %s\n", ft_strtrim("All is good!\n"));
	return (0);
}

