/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/27 18:29:43 by eboris            #+#    #+#             */
/*   Updated: 2019/11/11 15:44:27 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_precision.h"

int8_t	ft_precision(t_mainlist *param, va_list ap)
{
	char	s[12];
	char	*str;
	int8_t	n;
	int8_t	i;

	n = 0;
	i = param->offset;
	str = param->line;
	if ((str[i] != '\0') && (str[i] != '.'))
		return (ft_length(param, ap));
	param->precision = 0;
	param->offset = param->offset + 1;
	if (str[++i] == '*')
	{
		param->precision = va_arg(ap, int);
		param->offset = param->offset + 1;
		return (ft_length(param, ap));
	}
	while ((str[i] != '\0') && (str[i] >= '0') && (str[i] <= '9') && (n < 11))
		s[n++] = str[i++];
	s[n] = '\0';
	param->offset = param->offset + n;
	if (ft_strlen(s) > 0)
		param->precision = ft_atoi(s);
	return (ft_length(param, ap));
}
