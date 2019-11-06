/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memalloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 13:59:17 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:27:57 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memalloc(void)
{
	char	*str;
	int		i;

	str = ft_memalloc(5);
	i = 0;
	while (i < 5)
	{
		str[i] = 'w';
		i++;
	}
	if (ft_strcmp(str, "wwwww") == 0)
		ft_putstr("ft_memalloc OK\n");
	else
		ft_putstr("ft_memalloc FAILED\n");
}
