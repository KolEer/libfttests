/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 12:54:02 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 14:55:30 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memchr(void)
{
	char str[10] = "jeejoojuu\0";
	char c = 'o';
	void *ptr;
	int t1 = 0;
	int t2 = 0;

	ptr = ft_memchr(str, c, 8);
	if (ft_strcmp((char*)ptr, "oojuu") == 0)
		t1 = 1;
	ptr = ft_memchr(str, c, 2);
	if (ptr == NULL)
		t2 = 1;
	if (t1 == 1 && t2 == 1)	
		ft_putstr("ft_memchr OK\n");
	else
		ft_putstr("ft_memchr FAILED\n");
}
