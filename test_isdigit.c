/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isdigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:54:50 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:27:08 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int 	test_digit(char c)
{
	int n;

	n = ft_isdigit((int)c);
	if (n == 1)
		return (1);
	else
		return (0);
}

void	test_isdigit(void)
{
	int t1;
	int t2;

	t1 = test_digit(50);
	t2 = test_digit(80);
	if (t1 == 1 && t2 == 0)
		ft_putstr("ft_isdigit OK\n");
	else
		ft_putstr("ft_isdigit FAILED\n");
}
