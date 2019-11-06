/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_toupper.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 14:03:40 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 14:05:12 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_toupper(void)
{
	char c;

	c = ft_toupper((int)'h');
	if (c == 'H')
		ft_putstr("ft_toupper OK\n");
	else
		ft_putstr("ft_toupper FALILED\n");
}
