/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:51:53 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 15:05:54 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memcmp(void)
{
	int t1 = 1;
	int t2 = 0;
	int t3 = 0;

	t1 = ft_memcmp("jee", "jee", 3);
	t2 = ft_memcmp("jee", "joo", 3);
	t3 = ft_memcmp("jee", "jaa", 3);
	if (t1 == 0 && t2 < 0 && t3 > 0)
		ft_putstr("ft_memcmp OK\n");
	else
		ft_putstr("ft_memcmp FAILED\n");
}
