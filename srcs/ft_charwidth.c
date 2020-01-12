/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charwidth.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:29:26 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 17:08:44 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_charwidth.h"

char	*ft_charwidth(char *str, t_mainlist *param)
{
	char	*fin;

	if (param->width > 1)
	{
		fin = str;
		if ((param->flags == -1) || ((param->flags == 1) &&
						((param->fl_zero == 0) || (param->fl_minus == 1))))
		{
			if ((fin = ft_charwidth2(str, param, ' ')) == NULL)
				return (NULL);
		}
		else if ((param->flags == 1) && (param->fl_zero == 1) &&
						(param->fl_minus < 1))
		{
			if ((fin = ft_charwidth2(str, param, '0')) == NULL)
				return (NULL);
		}
	}
	else
		fin = str;
	return (fin);
}

char	*ft_charwidth2(char *str, t_mainlist *param, char c)
{
	int		i;
	int		z;
	int		n;
	char	*fin;

	i = 0;
	n = 0;
	z = param->width;
	if (!(fin = (char *)malloc((z + 1) * sizeof(char))))
		return (NULL);
	if ((param->flags == -1) || ((param->flags == 1) && (param->fl_minus < 1)))
		while (i < z - 1)
			fin[i++] = c;
	fin[i + n] = str[n];
	n++;
	if ((param->flags == 1) && (param->fl_minus == 1))
		while (n + i < z)
			fin[n++ + i] = c;
	fin[n + i] = '\0';
	param->width = n + i;
	ft_strdel(&str);
	return (fin);
}

wchar_t	*ft_wcharwidth(wchar_t *str, t_mainlist *param)
{
	wchar_t	*fin;

	if (param->width > 1)
	{
		fin = str;
		if ((param->flags == -1) || ((param->flags == 1) &&
						((param->fl_zero == 0) || (param->fl_minus == 1))))
		{
			if ((fin = ft_wcharwidth2(str, param, ' ')) == NULL)
				return (NULL);
		}
		else if ((param->flags == 1) && (param->fl_zero == 1) &&
						(param->fl_minus < 1))
		{
			if ((fin = ft_wcharwidth2(str, param, '0')) == NULL)
				return (NULL);
		}
	}
	else
		fin = str;
	return (fin);
}

wchar_t	*ft_wcharwidth2(wchar_t *str, t_mainlist *param, wchar_t c)
{
	int		i;
	int		z;
	int		n;
	wchar_t	*fin;

	i = 0;
	n = 0;
	z = param->width;
	if (!(fin = (wchar_t *)malloc((z + 1) * sizeof(wchar_t))))
		return (NULL);
	if ((param->flags == -1) || ((param->flags == 1) && (param->fl_minus < 1)))
		while (i < z - param->precision)
			fin[i++] = c;
	if (param->precision > 0)
	{
		fin[i + n] = str[0];
		n++;
	}
	if ((param->flags == 1) && (param->fl_minus == 1))
		while (param->precision + i < z)
			fin[n + i++] = c;
	fin[n + i] = '\0';
	param->width = n + i;
	ft_wstrdel(&str);
	return (fin);
}
