/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:36:35 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:26:45 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	test_alpha(char c)
{
	int n;

	n = ft_isalpha((int)c);
	if (n == 1)
		return (1);
	else
		return (0);
}

void	test_isalpha(void)
{
	int t1;
	int t2;
	int t3;

	t1 = test_alpha('c');
	t2 = test_alpha('C');
	t3 = test_alpha('\t');
	if (t1 == 1 && t2 == 1 && t3 == 0)
		ft_putstr("ft_isalpha OK\n");
	else
		ft_putstr("ft_isalpha FAILED\n");
}
