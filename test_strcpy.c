/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:24:01 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 14:43:48 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strcpy(void)
{
	char src[11] = "teststring\0";
	char dst[11];
	char *ptr;

	ptr = ft_strcpy(dst, src);
	if (ft_strcmp(dst, src) == 0 && ft_strcmp(ptr, src) == 0)
		ft_putstr("ft_strcpy OK\n");
	else
		ft_putstr("ft_strcpy FAILED\n");
}
