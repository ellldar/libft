/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esupatae <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 21:46:52 by esupatae          #+#    #+#             */
/*   Updated: 2019/10/07 21:47:21 by esupatae         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test(char *str, char c)
{
	char    **ans;
	char    *tmp;
	char    **head;

	if ((ans = ft_strsplit(str, c)))
	    head = ans;
	printf("%s, '%c'\n", str, c);
	printf("-------------------------------------------------------------\n");
	while(ans && *ans && **ans != '\0')
	{
		printf("%s, ", *ans);
		tmp = *ans;
		ans++;
		free(tmp);
	}
	printf("\n\n");
}

int	main(void)
{
	test("****  hello  **  eldar  ****  world   ***this***is*great****", '*');
	test("**************", '*');
	test("hello", '*');
	test("", '*');
	test("-- i --- know -- my --  math   ---  yes ------  or  - no ", '-');
	test("https://www.youtube.com/user/supataev/watch=xDF72SDFuv/", '/');
	test("0 0 0 0 0 0 0 0 0", ' ');
	test("split  ||this|for|me|||||!|", '|');
	test("      split       this for   me  !       ", ' ');
	test("***salut****!**", '*');
	test("*****", '*');
	test("coucou", '*');
	test("salut****", '*');
	test("****salut", '*');
	test("", '*');

	return (0);
}
