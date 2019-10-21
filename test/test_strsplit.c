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
	char	**ans;

	ans = ft_strsplit(str, c);
	while(ans && *ans && ft_strcmp(*ans, "\0"))
	{
		printf("%s, ", *ans);
		ans++;
	}
	printf("\n");
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
	test("      split       this for   me  !       ", ' ');
	return (0);
}

/*
int		main(int argc, char** argv)
{
	char **ans;

	if (argc == 3)
	{
		ans = ft_strsplit(argv[1], argv[2][0]);
		while (*ans)
		{
			if (*(ans + 1))
				printf("%s, ", *ans);
			else
				printf("%s\n", *ans);
			ans++;
		}
	}
	else
	{
		printf("Nothing to show!\n");
	}
	return (0);
}
 */