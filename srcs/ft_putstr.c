/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/12 08:04:56 by eboris            #+#    #+#             */
/*   Updated: 2019/11/26 18:26:26 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_putstr.h"

uint64_t	ft_putstr(char const *s, int32_t fd)
{
	uint64_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i], (int)fd);
		i++;
	}
	return (i);
}

uint64_t	ft_putwstr(wchar_t *str, int32_t fd)
{
	int8_t		i;
	uint64_t	n;

	i = 0;
	n = 0;
	while (str[i] != '\0')
	{
		n = n + ft_putwchar(str[i], (int)fd);
		i++;
	}
	return (n);
}

void		ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}

uint64_t	ft_putwchar(wchar_t a, int fd)
{
	unsigned char	c;

	c = 0;
	if (a <= 0x7F)
	{
		write(fd, &a, 1);
		return (1);
	}
	else if (a <= 0x7FF)
	{
		c = 0xC0 | (a >> 6);
		write(fd, &c, 1);
		c = 0x80 | (a & 0x3F);
		write(fd, &c, 1);
		return (2);
	}
	return (ft_putwchar2(a, fd, c));
}

uint64_t	ft_putwchar2(wchar_t a, int fd, unsigned char c)
{
	if (a <= 0xFFFF)
	{
		c = 0xE0 | (a >> 12);
		write(fd, &c, 1);
		c = 0x80 | ((a >> 6) & 0x3F);
		write(fd, &c, 1);
		c = 0x80 | (a & 0x3F);
		write(fd, &c, 1);
		return (3);
	}
	else if (a <= 0x10FFFF)
	{
		c = 0xF0 | (a >> 18);
		write(fd, &c, 1);
		c = 0x80 | ((a >> 12) & 0x3F);
		write(fd, &c, 1);
		c = 0x80 | ((a >> 6) & 0x3F);
		write(fd, &c, 1);
		c = 0x80 | (a & 0x3F);
		write(fd, &c, 1);
		return (4);
	}
	return (0);
}
