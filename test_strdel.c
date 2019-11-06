/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 16:28:38 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:34:14 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_strdel(void)
{
	char **str;

	if (!(str = (char**)malloc(sizeof(char) * 1)))
		return ;
	ft_strdel(str);
	ft_putstr("ft_strdel OK");
}
