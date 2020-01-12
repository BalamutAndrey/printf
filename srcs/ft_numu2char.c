/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numu2char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:05:13 by eboris            #+#    #+#             */
/*   Updated: 2020/01/09 14:14:39 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_numu2char.h"

char	*ft_numu2char(t_mainlist *param, uint64_t num)
{
	char		*fin;
	int64_t		i;
	uint64_t	n;

	i = 1;
	n = num;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	if ((fin = ft_numu2charlength(param, num, i)) == NULL)
		return (NULL);
	return (fin);
}

char	*ft_numu2charlength(t_mainlist *param, uint64_t num, int64_t i)
{
	char	*fin;

	if ((param->length > 0) && (param->length < 8))
	{
		if ((fin = ft_numu2charhhh(param, num, i)) == NULL)
			return (NULL);
	}
	else
	{
		if ((fin = ft_numu2charwr(param, num, i)) == NULL)
			return (NULL);
	}
	return (fin);
}

char	*ft_numu2charwr(t_mainlist *param, uint64_t num, int64_t i)
{
	char	*fin;
	int64_t	n;

	n = num;
	if (((param->fl_plus == 1) || (param->fl_space == 1)))
		i++;
	if ((fin = (char *)malloc((i + 1) * sizeof(char))) == NULL)
		return (NULL);
	fin[i] = '\0';
	while (n > 9)
	{
		fin[--i] = (n % 10) + '0';
		n = n / 10;
	}
	i--;
	fin[i--] = n + '0';
	if (param->fl_plus == 1)
		fin[i] = '+';
	if ((param->fl_space == 1) && (param->fl_plus != 1))
		fin[i] = ' ';
	return (ft_numu2charprecision(param, fin));
}

char	*ft_numu2charprecision(t_mainlist *param, char *str)
{
	char	y;
	int64_t	z;

	y = 'z';
	z = ft_strlen(str);
	if ((str[0] == '+') || (str[0] == ' '))
	{
		if (str[0] == '+')
			y = '+';
		else if (str[0] == ' ')
			y = ' ';
		z = z - 1;
	}
	if (z < param->precision)
		if ((str = ft_numu2charzero(param, str, z, y)) == NULL)
			return (NULL);
	if (((str[0] == '+') || (str[0] == ' ')) && (param->precision == 0))
		str[1] = '\0';
	else if (param->precision == 0)
		str[0] = '\0';
	return (str);
}

char	*ft_numu2charzero(t_mainlist *param, char *str, int64_t z, char y)
{
	int64_t	i;
	int64_t	n;
	int64_t	w;
	char	*fin;

	i = 0;
	n = 0;
	if (y == 'z')
		w = param->precision;
	else
		w = param->precision + 1;
	if ((fin = (char *)malloc((w + 1) * sizeof(char))) == NULL)
		return (NULL);
	if (y != 'z')
	{
		fin[i++] = y;
		n++;
	}
	while (i < (w - z))
		fin[i++] = '0';
	while (i < w)
		fin[i++] = str[n++];
	fin[i] = '\0';
	ft_strdel(&str);
	return (fin);
}
