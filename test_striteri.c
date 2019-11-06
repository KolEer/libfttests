/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:52:13 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:56:58 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	functoapply2(unsigned int i, char *c)
{
	c[0] = 'j';
	ft_putnbr(i);
	ft_putchar('\n');
}

void	test_striteri(void)
{
	char str[3] = "te\0";

	ft_striteri(str, &functoapply2);
	if (ft_strcmp(str, "jj") == 0)
		ft_putstr("ft_striter OK if numbers 0 and 1 above\n");
	else
		ft_putstr("ft_striter FAILED\n");
}
