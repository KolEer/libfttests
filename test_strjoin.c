/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:57:36 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:04:32 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strjoin(void)
{
	char str[11] = "teststring\0";
	char str2[11] = "stringtest\0";
	char *ptr;

	ptr = ft_strjoin(str, str2);
	if (ft_strcmp(ptr, "teststringstringtest") == 0)
		ft_putstr("ft_strjoin OK\n");
	else
		ft_putstr("ft_strjoin FAILED\n");
}
