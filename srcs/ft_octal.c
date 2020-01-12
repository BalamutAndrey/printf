/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:20:20 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:18:45 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_octal.h"

int8_t	ft_octal(t_mainlist *param, va_list ap)
{
	if ((param->length < 0) || (param->length == 2) || (param->length == 3))
		return (ft_oct(param, ap));
	else if (param->length == 1)
		return (ft_oct_l(param, ap));
	else if (param->length == 4)
		return (ft_oct_ll(param, ap));
	else if ((param->length == 5) || (param->length == 6) ||
				(param->length == 7) || (param->length == 8))
		return (ft_oct_ll(param, ap));
	return (1);
}

int8_t	ft_oct(t_mainlist *param, va_list ap)
{
	int64_t	i;
	char	*temp;

	i = va_arg(ap, unsigned int);
	if (param->length == 2)
		i = (unsigned char)i;
	else if (param->length == 3)
		i = (unsigned short int)i;
	if ((temp = ft_itoa_base(i, 8)) == 0)
		return (0);
	if ((i > 0) && (param->fl_octothorpe == 1))
		temp = ft_oct_octothorpe(temp);
	if ((temp = ft_numu2charprecision(param, temp)) == 0)
		return (0);
	if ((param->fl_octothorpe == 1) && (param->precision == 0))
	{
		ft_strdel(&temp);
		temp = ft_strdup("0");
	}
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_oct_l(t_mainlist *param, va_list ap)
{
	int64_t	i;
	char	*temp;

	i = va_arg(ap, unsigned long int);
	if ((temp = ft_itoa_base(i, 8)) == 0)
		return (0);
	if ((i > 0) && (param->fl_octothorpe == 1))
		temp = ft_oct_octothorpe(temp);
	if ((temp = ft_numu2charprecision(param, temp)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_oct_ll(t_mainlist *param, va_list ap)
{
	int64_t	i;
	char	*temp;

	i = va_arg(ap, unsigned long long int);
	if ((temp = ft_itoa_base(i, 8)) == 0)
		return (0);
	if ((i > 0) && (param->fl_octothorpe == 1))
		temp = ft_oct_octothorpe(temp);
	if ((temp = ft_numu2charprecision(param, temp)) == 0)
		return (0);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

char	*ft_oct_octothorpe(char *temp)
{
	char	*fin;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(temp);
	fin = (char *)malloc((len + 2) * sizeof(char));
	fin[0] = '0';
	fin[len + 1] = '\0';
	while (i < len)
	{
		fin[i + 1] = temp[i];
		i++;
	}
	ft_strdel(&temp);
	return (fin);
}
