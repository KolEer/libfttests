/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/22 15:06:26 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:27:26 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_itoa(void)
{
	char *s;

	s = ft_itoa(523);
	if (ft_strcmp(s, "523") == 0)
		ft_putstr("ft_itoa OK\n");
	else
		ft_putstr("ft_itoa FAILED\n");	
}
