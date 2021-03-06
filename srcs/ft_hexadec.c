/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/08 17:36:52 by eboris            #+#    #+#             */
/*   Updated: 2020/01/09 14:17:54 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_hexadec.h"

int8_t	ft_hexadec(t_mainlist *param, va_list ap)
{
	if (param->precision > -1)
		param->fl_zero = -1;
	return (ft_hex(param, ap));
}

int8_t	ft_hex(t_mainlist *param, va_list ap)
{
	int64_t	i;
	char	*temp;

	i = ft_hex_length(param, ap);
	if ((temp = ft_itoa_base(i, 16)) == 0)
		return (0);
	if ((temp = ft_numu2charprecision(param, temp)) == 0)
		return (0);
	if ((i > 0) && (param->fl_octothorpe == 1) && (param->fl_zero > 0))
		param->width = param->width - 2;
	if ((i > 0) && (param->fl_octothorpe == 1) && (param->fl_zero == -1))
		temp = ft_hex_octothorpe(temp);
	else if (param->type == 18)
		temp = ft_hex_octothorpe(temp);
	if ((temp = ft_integerwidth(param, temp)) == 0)
		return (0);
	if ((i > 0) && (param->fl_octothorpe == 1) && (param->fl_zero > 0))
		temp = ft_hex_octothorpe(temp);
	if (param->type == 6)
		temp = ft_hex_x(temp);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int64_t	ft_hex_length(t_mainlist *param, va_list ap)
{
	int64_t	fin;

	if (param->length == 2)
	{
		fin = va_arg(ap, unsigned int);
		fin = (unsigned char)fin;
	}
	else if (param->length == 3)
	{
		fin = va_arg(ap, unsigned int);
		fin = (unsigned short int)fin;
	}
	else if (param->length == 1)
		fin = va_arg(ap, unsigned long int);
	else if (param->length == 4)
		fin = va_arg(ap, unsigned long long int);
	else if (param->length == 5)
		fin = va_arg(ap, uintmax_t);
	else if (param->length == 6)
		fin = va_arg(ap, size_t);
	else if (param->length == 7)
		fin = va_arg(ap, ptrdiff_t);
	else
		fin = va_arg(ap, unsigned int);
	return (fin);
}

char	*ft_hex_octothorpe(char *temp)
{
	char	*fin;
	int		i;
	int		len;

	i = 0;
	len = ft_strlen(temp);
	if ((fin = (char *)malloc((len + 3) * sizeof(char))) == NULL)
		return (NULL);
	fin[0] = '0';
	fin[1] = 'x';
	fin[len + 2] = '\0';
	while (i < len)
	{
		fin[i + 2] = temp[i];
		i++;
	}
	ft_strdel(&temp);
	return (fin);
}

char	*ft_hex_x(char *temp)
{
	int		i;
	char	*fin;

	i = 0;
	if ((fin = malloc((ft_strlen(temp) + 1) * sizeof(char))) == NULL)
		return (NULL);
	while (temp[i] != '\0')
	{
		if ((temp[i] >= 'a') && (temp[i] <= 'z'))
			fin[i] = temp[i] - 32;
		else
			fin[i] = temp[i];
		i++;
	}
	fin[i] = temp[i];
	ft_strdel(&temp);
	return (fin);
}
