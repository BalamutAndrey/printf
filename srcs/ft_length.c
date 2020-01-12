/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:31:45 by eboris            #+#    #+#             */
/*   Updated: 2019/11/23 16:27:54 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_length.h"

int8_t	ft_length(t_mainlist *param, va_list ap)
{
	int16_t	i;
	char	*str;

	i = param->offset;
	str = param->line;
	if ((str[i] != '\0') && (str[i] == 'l'))
	{
		if ((str[i + 1] != '\0') && (str[i + 1] == 'l'))
		{
			param->length = 4;
			param->offset = param->offset + 2;
		}
		else
		{
			param->length = 1;
			param->offset = param->offset + 1;
		}
	}
	else if ((str[i] != '\0') && (str[i] == 'j'))
	{
		param->length = 5;
		param->offset = param->offset + 1;
	}
	return (ft_length2(param, ap, i));
}

int8_t	ft_length2(t_mainlist *param, va_list ap, int8_t i)
{
	char	*str;

	str = param->line;
	if ((str[i] != '\0') && (str[i] == 'h'))
	{
		if ((str[i + 1] != '\0') && (str[i + 1] == 'h'))
		{
			param->length = 2;
			param->offset = param->offset + 2;
		}
		else
		{
			param->length = 3;
			param->offset = param->offset + 1;
		}
	}
	else if ((str[i] != '\0') && (str[i] == 'z'))
	{
		param->length = 6;
		param->offset = param->offset + 1;
	}
	return (ft_length3(param, ap, i));
}

int8_t	ft_length3(t_mainlist *param, va_list ap, int8_t i)
{
	char	*str;

	str = param->line;
	if ((str[i] != '\0') && (str[i] == 't'))
	{
		param->length = 7;
		param->offset = param->offset + 1;
	}
	else if ((str[i] != '\0') && (str[i] == 'L'))
	{
		param->length = 8;
		param->offset = param->offset + 1;
	}
	return (ft_type(param, ap));
}
