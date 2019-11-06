/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_tolower.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:06:18 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 14:07:27 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_tolower(void)
{
	char c;

	c = ft_tolower((int)'D');
	if (c == 'd')
		ft_putstr("ft_tolower OK\n");
	else
		ft_putstr("ft_tolower FAILED\n");
}
