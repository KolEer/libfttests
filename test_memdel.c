/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memdel.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 15:06:34 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 16:31:20 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	test_memdel(void)
{
	int *arr;
		
	if (!(arr = (int*)malloc(sizeof(int) * 1)))
		return ;
	arr[0] = 12;
	ft_memdel((void**)arr);
	ft_putstr("ft_memdel OK");
}
