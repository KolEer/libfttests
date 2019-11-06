/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:47:27 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:49:29 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strnew(void)
{
	char *ptr;

	ptr = ft_strnew(5);
	ptr[0] = 'a';
	ptr[1] = 'n';

	if (ptr[0] == 'a' && ptr[1] == 'n' && ptr[4] == '\0')
		ft_putstr("ft_strnew OK\n");
	else
		ft_putstr("ft_strnew FAILED\n");
}
