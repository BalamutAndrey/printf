/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 17:15:11 by eboris            #+#    #+#             */
/*   Updated: 2020/01/12 17:25:58 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int			ft_printf(const char *format, ...)
{
	va_list		ap;
	t_mainlist	*param;

	param = NULL;
	param = ft_printf_mainlist(param);
	param->fd = 1;
	va_start(ap, format);
	if (ft_strlen((char *)format) != 0)
	{
		if ((param->line = ft_strdup((char *)format)) != NULL)
			ft_parsing(param, ap);
	}
	va_end(ap);
	return (ft_remove_mainlist(param));
}

int			ft_dprintf(int fd, const char *format, ...)
{
	va_list		ap;
	t_mainlist	*param;

	param = NULL;
	param = ft_printf_mainlist(param);
	param->fd = fd;
	va_start(ap, format);
	if (ft_strlen((char *)format) != 0)
	{
		if ((param->line = ft_strdup((char *)format)) != NULL)
			ft_parsing(param, ap);
	}
	va_end(ap);
	return (ft_remove_mainlist(param));
}
