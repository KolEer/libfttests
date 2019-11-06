/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdup.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:35:05 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:37:15 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strdup(void)
{
	char str[11] = "teststring\0";
	char *ptr;

	ptr = ft_strdup(str);

	if (ft_strcmp(ptr, str) == 0)
		ft_putstr("ft_strdup OK\n");
	else
		ft_putstr("ft_strdup FAILED\n");
}
