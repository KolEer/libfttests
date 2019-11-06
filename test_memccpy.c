/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memccpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:04:19 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:37:20 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memccpy(void)
{
	char		dst[10] = "qwitestii\0";
    char		src[10] = "testqwije\0";
	void		*ptr;
	char		c = 'i';

	ptr = ft_memccpy(dst, (const void*)src, (int)c, 8);
	if (ft_strcmp((const char*)dst, "testqwiii") == 0)
		ft_putstr("ft_memccpy OK\n");
	else
		ft_putstr("ft_memccpy FAILED\n");
}
