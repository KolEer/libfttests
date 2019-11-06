/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/28 17:17:58 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/28 17:22:45 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	functoapply4(unsigned int i, char c)
{
	c = 'j';
	ft_putnbr(i);
	ft_putchar('\n');
	return (c);
}

void	test_strmapi(void)
{
	char str[3] = "te\0";
	char *ptr;

	ptr = ft_strmapi(str, &functoapply4);
	if (ft_strcmp(ptr, "jj") == 0)
		ft_putstr("ft_strmapi OK if numbers 0 and 1 above\n");
	else
		ft_putstr("ft_strmapi FAILED\n");
}
