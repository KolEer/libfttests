/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:42:13 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:51:44 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	functoapply(char *c)
{
	c[0] = 'j';
}

void	test_striter(void)
{
	char str[11] = "teststring\0";

	ft_striter(str, &functoapply);
	if (ft_strcmp(str, "jjjjjjjjjj") == 0)
		ft_putstr("ft_striter OK\n");
	else
		ft_putstr("ft_striter FAILED\n");
}
