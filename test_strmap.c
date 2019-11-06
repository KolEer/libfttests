/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmap.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:13:00 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:17:51 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	functoapply3(char c)
{
	c = 'j';
	return (c);
}

void	test_strmap(void)
{
	char str[11] = "teststring\0";
	char *ptr;

	ptr = ft_strmap(str, &functoapply3);
	if (ft_strcmp(ptr, "jjjjjjjjjj") == 0)
		ft_putstr("ft_strmap OK\n");
	else
		ft_putstr("ft_strmap FAILED\n");
}
