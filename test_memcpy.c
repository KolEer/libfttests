/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 14:58:21 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 15:04:21 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memcpy(void)
{
	char		dst[10] = "qwitestii\0";
    char		src[10] = "testqwije\0";
	void		*ptr;

	ptr = ft_memcpy(dst, (const void*)src, 7);
	if (ft_strcmp((const char*)dst, "testqwiii") == 0)
		ft_putstr("ft_memcpy OK\n");
	else
		ft_putstr("ft_memcpy FAILED\n");
}
