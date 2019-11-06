/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strequ.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:37:52 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:41:52 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strequ(void)
{
	char str[11] = "teststring\0";
	char str2[11] = "teststring\0";
	int t1;
	int t2;

	t1 = ft_strequ(str, str2);
	str2[2] = 'a';
	t2 = ft_strequ(str, str2);
	if (t1 == 1 && t2 == 0)
		ft_putstr("ft_strequ OK\n");
	else
		ft_putstr("ft_strequ FAILED\n");
}
