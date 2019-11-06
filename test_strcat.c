/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strcat.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:59:10 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:03:20 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strcat(void)
{
	char s1[22] = "teststring";
	char s2[11] = "stringtest\0";
	
	ft_strcat(s1, s2);
	if (strcmp(s1, "teststringstringtest") == 0)
		ft_putstr("ft_strcat OK\n");
	else
		ft_putstr("ft_strcat FAILED\n");
}
