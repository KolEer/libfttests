/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnequ.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:44:55 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:47:19 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strnequ(void)
{
	char str[11] = "teststring\0";
	char str2[11] = "teststring\0";
	int t1;
	int t2;

	t1 = ft_strnequ(str, str2, 4);
	str2[2] = 'a';
	t2 = ft_strnequ(str, str2, 5);
	if (t1 == 1 && t2 == 0)
		ft_putstr("ft_strnequ OK\n");
	else
		ft_putstr("ft_strnequ FAILED\n");
}
