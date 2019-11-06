/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:17:12 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:23:35 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strcmp(void)
{
	char str[11] = "teststring\0";
	char str2[11] = "teststring\0";
	int t1 = 1;
	int t2 = 0;
	int t3 = 0;

	t1 = ft_strcmp(str, str2);
	str[1] = 'b';
	t2 = ft_strcmp(str, str2);
	str2[1] = 'a';
	t3 = ft_strcmp(str, str2);
	if (t1 == 0 && t2 < 0 && t3 > 0)
		ft_putstr("ft_strcmp OK\n");
	else
		ft_putstr("ft_strcmp FAILED\n");
}
