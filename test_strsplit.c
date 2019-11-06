/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsplit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:24:16 by ekolehma          #+#    #+#             */
/*   Updated: 2019/11/04 16:21:52 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strsplit(void)
{
	char str[37] = "testwtest2wtest3wtest4\0";
	char **ptr;

	ptr = ft_strsplit(str, 'w');
	if (ft_strcmp(ptr[0], "test") == 0 && ft_strcmp(ptr[1], "test2") == 0
			&& ft_strcmp(ptr[2], "test3") == 0 &&
		   	ft_strcmp(ptr[3], "test4") == 0)
		ft_putstr("ft_strsplit OK\n");
	else
		ft_putstr("ft_strsplit FAILED\n");
}
