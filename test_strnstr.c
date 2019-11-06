/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:51:04 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 12:11:58 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strnstr(void)
{
	char str[11] = "teststring\0";
	char str2[3] = "tr\0";
	char *ptr;
	int t1 = 0;
	int t2 = 0;

	ptr = ft_strnstr(str, str2, 7);
	if (ft_strcmp(ptr, "tring") == 0)
		t1 = 1;
	ptr = ft_strnstr(str, str2, 2);
	if (ptr == NULL)
		t2 = 1;
	if (t1 == 1 && t2 == 1)
		ft_putstr("ft_strnstr OK\n");
	else
		ft_putstr("ft_strnstr FAILED\n");
}
