/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:03:42 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:13:05 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strchr(void)
{
	char str[11] = "teststring\0";
	char c = 's';
	char *ptr;

	ptr = ft_strchr(str, c);
	if (ft_strcmp(ptr, "ststring") == 0)
		ft_putstr("ft_strchr OK\n");
	else
		ft_putstr("ft_strchr FAILED\n");
}
