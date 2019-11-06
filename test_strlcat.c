/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:04:59 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:10:45 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strlcat(void)
{
	char s1[22] = "teststring";
	char s2[11] = "stringtest\0";
	size_t i;

	i = ft_strlcat(s1, s2, 22);
	if (strcmp(s1, "teststringstringtest") == 0 && i == 20)
		ft_putstr("ft_strlcat OK\n");
	else
		ft_putstr("ft_strlcat FAILED\n");
}
