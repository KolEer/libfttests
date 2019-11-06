/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strclr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:13:43 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:16:48 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strclr(void)
{
	char str[2] = "aa";

	ft_strclr(str);
	if (str[0] == '\0' && str[1] == '\0')
		ft_putstr("ft_strclr OK\n");
	else
		ft_putstr("ft_strclr FAILED\n");
}
