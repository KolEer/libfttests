/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strtrim.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:53:55 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 14:03:25 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strtrim(void)
{
	char str[30] = "  \t \n teststring \n\t ";
	char *ptr;

	ptr = ft_strtrim(str);
	if (ft_strcmp(ptr, "teststring") == 0)
		ft_putstr("ft_strtrim OK\n");
	else
		ft_putstr("ft_strtrim FAILED\n");
}
