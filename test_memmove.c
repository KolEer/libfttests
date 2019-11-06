/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:19:55 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 15:37:00 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memmove(void)
{
	char dst[11] = "teststring\0";
	char src[11] = "stringtest\0";
	void *ptr;
	ptr = ft_memmove(dst, src, 6);
	if (ft_strcmp((char*)ptr, "stringring") == 0)
		ft_putstr("ft_memmove OK\n");
	else
		ft_putstr("ft_memmove FAILED\n");
}
