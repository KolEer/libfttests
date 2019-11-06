/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 12:12:12 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 12:23:42 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strrchr(void)
{
	char str[11] = "teststring\0";
	char *ptr;

	ptr = ft_strrchr(str, 115);
	if (ft_strcmp(ptr, "string") == 0)
		ft_putstr("ft_strrchr OK\n");
	else
		ft_putstr("ft_strrchr FAILED\n");
	
}
