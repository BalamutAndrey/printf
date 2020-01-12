/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 14:32:34 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 17:10:37 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_char.h"

int8_t	ft_char(t_mainlist *param, va_list ap)
{
	char			*temp;
	unsigned int	c;

	c = va_arg(ap, unsigned int);
	if (!(temp = (char *)malloc(2 * sizeof(char))))
		return (0);
	if (param->width == 0)
		temp[0] = '\0';
	else
		temp[0] = c;
	temp[1] = '\0';
	if (param->width == -1)
		param->width = 1;
	if ((temp = ft_charwidth(temp, param)) == NULL)
		return (0);
	param->line_length = param->line_length + ft_putcharstr(temp, param);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_wchar(t_mainlist *param, va_list ap)
{
	wchar_t	*temp;
	wchar_t	c;

	c = va_arg(ap, wint_t);
	if ((temp = (wchar_t *)malloc(2 * sizeof(wchar_t))) == NULL)
		return (0);
	if (param->precision == 0)
		temp[0] = '\0';
	else
	{
		temp[0] = c;
		param->precision = ft_charlen(c);
	}
	temp[1] = '\0';
	if (param->width == -1)
		param->width = 1;
	if ((temp = ft_wcharwidth(temp, param)) == NULL)
		return (0);
	param->line_length = param->line_length + ft_putwcharstr(temp, param);
	ft_wstrdel(&temp);
	return (1);
}

int32_t	ft_putcharstr(char *str, t_mainlist *param)
{
	int	i;

	i = 0;
	while (i < param->width)
	{
		ft_putchar(str[i], param->fd);
		i++;
	}
	return (i);
}

int32_t	ft_putwcharstr(wchar_t *str, t_mainlist *param)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (i < param->width)
	{
		n = n + ft_putwchar(str[i], param->fd);
		i++;
	}
	return (n);
}
