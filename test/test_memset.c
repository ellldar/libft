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

void	printArray(size_t arr[], int n)
{
	for (int i = 0; i < n; i++)
		printf("%lu\t", arr[i]);
	printf("\n");
}

int		main(void)
{
	size_t	n = 10;
	size_t	arr1[n], arr2[n];

	printArray(arr1, 10);
	printArray(arr2, 10);
	memset(arr1, 0,  n * sizeof(arr1[0]));
	ft_memset(arr2, 0, n * sizeof(arr2[0]));
	printf("\n");
	printArray(arr1, 10);
	printArray(arr2, 10);
	return (0);
}
