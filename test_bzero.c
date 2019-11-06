/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 12:37:22 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:26:25 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_bzero(void)
{
	char s[5];
	int i;

	i = 0;
	while (i < 5)
	{
		s[i] = 'w';
		i++;
	}
	ft_bzero(s, 2);
	if (ft_strcmp(s, "\0\0www") == 0)
		ft_putstr("ft_bzero OK\n");
	else
		ft_putstr("ft_bzero FAILED\n");
}
