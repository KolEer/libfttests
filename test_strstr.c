/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:44:31 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 13:48:28 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strstr(void)
{
		char str[11] = "teststring\0";
	char str2[3] = "tr\0";
	char *ptr;

	ptr = ft_strstr(str, str2);
	if (ft_strcmp(ptr, "tring") == 0)
		ft_putstr("ft_strstr OK\n");
	else
		ft_putstr("ft_strstr FAILED\n");
}
