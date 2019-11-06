/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:33:51 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 15:37:54 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memset(void)
{
	char dst[11] = "teststring\0";
	char *ptr;

	ptr = ft_memset(dst, 'c', 4);
	if (ft_strcmp(ptr, "cccstring"))
		ft_putstr("ft_memset OK\n");
	else
		ft_putstr("ft_memset FAILED\n");
}
