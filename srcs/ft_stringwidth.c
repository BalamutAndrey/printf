/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringwidth.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 17:59:48 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 14:15:26 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stringwidth.h"

char	*ft_stringwidth(char *str, t_mainlist *param)
{
	char	*fin;

	if (ft_strlen(str) < param->width)
	{
		fin = str;
		if ((param->flags == -1) || ((param->flags == 1) &&
						((param->fl_zero == 0) || (param->fl_minus == 1))))
		{
			fin = ft_stringwidth2(str, param, ' ');
		}
		else if ((param->flags == 1) && (param->fl_zero == 1) &&
						(param->fl_minus < 1))
		{
			fin = ft_stringwidth2(str, param, '0');
		}
	}
	else
	{
		fin = str;
	}
	return (fin);
}

char	*ft_stringwidth2(char *str, t_mainlist *param, char c)
{
	int		i;
	int		z;
	int		n;
	char	*fin;

	i = 0;
	n = 0;
	z = param->width;
	if ((fin = (char *)malloc((z + 1) * sizeof(char))) == NULL)
		return (NULL);
	if ((param->flags == -1) || ((param->flags == 1) && (param->fl_minus < 1)))
		while (i < z - ft_strlen(str))
			fin[i++] = c;
	while (str[n] != '\0')
	{
		fin[i + n] = str[n];
		n++;
	}
	if ((param->flags == 1) && (param->fl_minus == 1))
		while (n + i < z)
			fin[n++ + i] = c;
	fin[n + i] = '\0';
	ft_strdel(&str);
	return (fin);
}

wchar_t	*ft_wstringwidth(wchar_t *str, t_mainlist *param)
{
	wchar_t	*fin;

	if (ft_wstrlen(str) < param->width)
	{
		fin = str;
		if ((param->flags == -1) || ((param->flags == 1) &&
						((param->fl_zero == 0) || (param->fl_minus == 1))))
		{
			fin = ft_wstringwidth2(str, param, ' ');
		}
		else if ((param->flags == 1) && (param->fl_zero == 1) &&
						(param->fl_minus < 1))
		{
			fin = ft_wstringwidth2(str, param, '0');
		}
	}
	else
	{
		fin = str;
	}
	return (fin);
}

wchar_t	*ft_wstringwidth2(wchar_t *str, t_mainlist *param, wchar_t c)
{
	int		i;
	int		z;
	int		n;
	wchar_t	*fin;

	i = 0;
	n = 0;
	z = param->width;
	if ((fin = (wchar_t *)malloc((z + 1) * sizeof(wchar_t))) == NULL)
		return (NULL);
	if ((param->flags == -1) || ((param->flags == 1) && (param->fl_minus < 1)))
		while (i < z - ft_wstrlen(str))
			fin[i++] = c;
	while (str[n] != '\0')
	{
		fin[i + n] = str[n];
		n++;
	}
	if ((param->flags == 1) && (param->fl_minus == 1))
		while (ft_wstrlen(str) + i < z)
			fin[n + i++] = c;
	fin[n + i] = '\0';
	ft_wstrdel(&str);
	return (fin);
}
