/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:51:46 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:26:35 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		test_alnum(char c)
{
	int n;

	n = ft_isalnum((int)c);
	if (n == 1)
		return (1);
	else
		return (0);
}

void	test_isalnum(void)
{
	int t1;
	int t2;
	int t3;

	t1 = test_alnum('a');
	t2 = test_alnum('1');
	t3 = test_alnum('\t');
	if (t1 == 1 && t2 == 1 && t3 == 0)
		ft_putstr("ft_isalnum OK\n");
	else
		ft_putstr("ft_isalnum FAILED\n");
}

