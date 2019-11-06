/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:22:53 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:25:35 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strncat(void)
{
	char s1[22] = "teststring";
	char s2[11] = "stringtest\0";

	ft_strncat(s1, s2, 4);
	if (strcmp(s1, "teststringstri") == 0)
		ft_putstr("ft_strncat OK\n");
	else
		ft_putstr("ft_strncat FAILED\n");
}
