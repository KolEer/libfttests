/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:28:40 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:43:52 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strncpy(void)
{
	char src[11] = "teststring\0";
	char dst[5];
	char *ptr;

	ptr = ft_strncpy(dst, src, 4);
	if (ft_strcmp(dst, "test") == 0 && ft_strcmp(ptr, "test") == 0)
		ft_putstr("ft_strncpy OK\n");
	else
		ft_putstr("ft_strncpy FAILED\n");
}
