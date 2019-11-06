/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isascii.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:40:35 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:26:55 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	test_ascii(char c)
{
	int n;

	n = ft_isascii((int)c);
	if (n == 1)
		return (1);
	else
		return (0);
}

void	test_isascii(void)
{
	int t1;
	int t2;

	t1 = test_ascii(42);
	t2 = test_ascii(-12);
	if (t1 == 1 && t2 == 0)
		ft_putstr("ft_isascii OK\n");
	else
		ft_putstr("ft_isascii FAILED\n");
}
