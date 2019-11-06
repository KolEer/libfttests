/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekolehma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/23 14:17:27 by ekolehma          #+#    #+#             */
/*   Updated: 2019/10/30 16:52:19 by ekolehma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	callfunc1(void)
{
	test_atoi();
	test_bzero();
	test_isalnum();
	test_isalpha();
	test_isascii();
	test_isdigit();
	test_isprint();
	test_itoa();
	test_memalloc();
	test_memccpy();
	test_memchr();
	test_memcmp();
	test_memcpy();
	//test_memdel();
	test_memmove();
	test_memset();
	test_putchar();
	test_putchar_fd();
	test_putendl();
	test_putendl_fd();
	test_putnbr();
	test_putnbr_fd();
	test_putstr();
	test_putstr_fd();
	test_strcat();
	test_strchr();
	test_strclr();
	test_strcmp();
	test_strcpy();
	//test_strdel();
	test_strdup();
	test_strequ();
	test_striter();
	test_striteri();
	test_strjoin();
	test_strlcat();
	test_strlen();
	test_strmap();
	test_strmapi();
	test_strncat();
	test_strncmp();
	test_strncpy();
	test_strnequ();
	test_strnew();
	test_strnstr();
	test_strrchr();
	test_strsplit();
	test_strstr();
	test_strsub();
	test_strtrim();
	test_toupper();
	test_tolower();
}

//void	callfunc2(void)
//{
//	
//}

int		main(void)
{
	callfunc1();
	//callfunc2();
	return (0);
}
