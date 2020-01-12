/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/09 16:23:28 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:25:54 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_float.h"

int8_t	ft_float(t_mainlist *param, va_list ap)
{
	if (param->fl_minus != -1)
		param->fl_zero = -1;
	if (param->precision == -1)
		param->precision = 6;
	if ((param->fl_space > 0) && (param->fl_plus > 0))
		param->fl_space = -1;
	if (param->length == 8)
		return (ft_float_longdouble(param, ap));
	else
		return (ft_float_double(param, ap));
}

int8_t	ft_float_double(t_mainlist *param, va_list ap)
{
	t_double	*num;
	t_float		f;

	f.f = (double)va_arg(ap, double);
	if ((num = (t_double *)malloc(sizeof(t_double))) == NULL)
		return (0);
	if (f.f != f.f)
	{
		ft_float_naninf(param, 1024, f.t_comp.exponent, f.t_comp.sign);
		return (1);
	}
	else if (ft_float_naninf(param, f.t_comp.mantissa,
							f.t_comp.exponent, f.t_comp.sign) == 1)
		return (1);
	num->num = f.f;
	num->mantissa = ft_strdup(ft_itoa_base(f.t_comp.mantissa, 2));
	num->exponent = f.t_comp.exponent - 1023;
	num->sing = f.t_comp.sign;
	return (ft_float_floor(param, num));
}

int8_t	ft_float_longdouble(t_mainlist *param, va_list ap)
{
	t_lngdouble	*num;
	t_ldouble	f;

	f.f = (long double)va_arg(ap, long double);
	if ((num = (t_lngdouble *)malloc(sizeof(t_lngdouble))) == NULL)
		return (0);
	if (f.f != f.f)
	{
		ft_ldouble_naninf(param, 1024, f.t_ldcomp.exponent, f.t_ldcomp.sign);
		return (1);
	}
	else if (ft_ldouble_naninf(param, f.t_ldcomp.mantissa,
							f.t_ldcomp.exponent, f.t_ldcomp.sign) == 1)
		return (1);
	num->num = f.f;
	num->mantissa = ft_strdup(ft_itoa_base(f.t_ldcomp.mantissa, 2));
	num->exponent = f.t_ldcomp.exponent - 16382;
	num->sing = f.t_ldcomp.sign;
	return (ft_ldouble_floor(param, num));
}
