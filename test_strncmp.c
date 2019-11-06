/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:25:37 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:28:08 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strncmp(void)
{
	char str[11] = "teststring\0";
	char str2[11] = "teststring\0";
	int t1 = 1;
	int t2 = 0;
	int t3 = 0;
	int t4 = 1;
	t1 = ft_strncmp(str, str2, 2);
	str[1] = 'b';
	t2 = ft_strncmp(str, str2, 2);
	str2[1] = 'a';
	t3 = ft_strncmp(str, str2, 2);
	t4 = ft_strncmp(str, str2, 1);
	if (t1 == 0 && t2 < 0 && t3 > 0 && t4 == 0)
		ft_putstr("ft_strncmp OK\n");
	else
		ft_putstr("ft_strncmp FAILED\n");
}
