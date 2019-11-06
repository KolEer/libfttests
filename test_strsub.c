/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strsub.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:48:45 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 13:53:40 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strsub(void)
{
	char str[20] = "thisisateststring\0";
	char *ptr;

	ptr = ft_strsub(str, 6, 5);
	if (ft_strcmp(ptr, "atest") == 0)
		ft_putstr("ft_strsub OK\n");
	else
		ft_putstr("ft_strsub FAILED\n");
}
