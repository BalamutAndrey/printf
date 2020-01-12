/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_naninf.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 18:27:31 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 18:31:48 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float_naninf.h"

int8_t	ft_float_naninf(t_mainlist *param, int mantissa, int exponent, int sing)
{
	char	*fin;

	if ((exponent == 2047) && (mantissa == 0))
	{
		if (sing == 1)
			fin = ft_strdup("-inf");
		else if (param->fl_plus > -1)
			fin = ft_strdup("+inf");
		else if (param->fl_space > -1)
			fin = ft_strdup(" inf");
		else
			fin = ft_strdup("inf");
	}
	else if ((exponent == 2047) && (mantissa != 0))
		fin = ft_strdup("nan");
	else
		return (0);
	fin = ft_stringwidth2(fin, param, ' ');
	param->line_length = param->line_length + ft_putstr(fin, param->fd);
	ft_strdel(&fin);
	return (1);
}

int8_t	ft_ldouble_naninf(t_mainlist *param, int mantissa,
							int exponent, int sing)
{
	char	*fin;

	if ((exponent == 32767) && (mantissa == 0))
	{
		if (sing == 1)
			fin = ft_strdup("-inf");
		else if (param->fl_plus > -1)
			fin = ft_strdup("+inf");
		else if (param->fl_space > -1)
			fin = ft_strdup(" inf");
		else
			fin = ft_strdup("inf");
	}
	else if ((exponent == 32767) && (mantissa != 0))
		fin = ft_strdup("nan");
	else
		return (0);
	fin = ft_stringwidth2(fin, param, ' ');
	param->line_length = param->line_length + ft_putstr(fin, param->fd);
	ft_strdel(&fin);
	return (1);
}
