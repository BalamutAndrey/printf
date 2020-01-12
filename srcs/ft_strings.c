/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strings.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:23:45 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 14:23:57 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strings.h"

int8_t	ft_strings(t_mainlist *param, va_list ap)
{
	char	*temp;

	if (!(temp = ft_strdup(va_arg(ap, char *))))
		temp = ft_null();
	if ((param->precision > -1) && (ft_strlen(temp) > param->precision))
		temp[param->precision] = '\0';
	temp = ft_stringwidth(temp, param);
	param->line_length = param->line_length + ft_putstr(temp, param->fd);
	ft_strdel(&temp);
	return (1);
}

int8_t	ft_wstrings(t_mainlist *param, va_list ap)
{
	wchar_t	*temp;

	if (!(temp = ft_wstrdup(va_arg(ap, wchar_t *))))
		temp = ft_wnull();
	if ((param->precision > -1) && (ft_wstrlen(temp) > param->precision))
		if ((temp = ft_wstring_precision(param, temp)) == NULL)
			return (0);
	temp = ft_wstringwidth(temp, param);
	param->line_length = param->line_length + ft_putwstr(temp, param->fd);
	ft_wstrdel(&temp);
	return (1);
}

wchar_t	*ft_wstring_precision(t_mainlist *param, wchar_t *src)
{
	wchar_t	*temp;
	int32_t	n;
	int32_t	i;

	n = 0;
	i = 0;
	if (!(temp = (wchar_t *)malloc((param->precision + 1) * sizeof(wchar_t))))
		return (NULL);
	while (n < param->precision)
	{
		if ((n + ft_charlen(src[i])) <= param->precision)
		{
			temp[i] = src[i];
			n = n + ft_charlen(src[i]);
			i++;
		}
		else
		{
			n = n + 5;
		}
	}
	temp[i] = '\0';
	ft_wstrdel(&src);
	return (temp);
}
