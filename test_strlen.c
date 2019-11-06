/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:11:00 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:16:24 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strlen(void)
{
	char str[11] = "teststring\0";
	int i;

	i = ft_strlen(str);
	if (i == 10)
		ft_putstr("ft_strlen OK\n");
	else
		ft_putstr("ft_strlen FAILED\n");
}
