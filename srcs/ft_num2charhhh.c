/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2charhhh.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/05 19:46:58 by eboris            #+#    #+#             */
/*   Updated: 2020/02/03 14:56:29 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num2charhhh.h"

char	*ft_num2charhhh(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	char	*fin;

	fin = NULL;
	if (param->length == 2)
		fin = ft_num2charhh(param, num, minus, i);
	else if (param->length == 3)
		fin = ft_num2charh(param, num, minus, i);
	else if (param->length == 1)
		fin = ft_num2charl(param, num, minus, i);
	else if (param->length == 4)
		fin = ft_num2charll(param, num, minus, i);
	else if (param->length == 5)
		fin = ft_num2charj(param, num, minus, i);
	else if (param->length == 6)
		fin = ft_num2charz(param, num, minus, i);
	else if (param->length == 7)
		fin = ft_num2chart(param, num, minus, i);
	return (fin);
}

char	*ft_num2charhh(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	int64_t	c;
	char	*fin;

	if (minus == 1)
	{
		c = (unsigned char)num;
		c = c * -1;
	}
	else
		c = (unsigned char)num;
	if (minus == 1)
		i--;
	param->length = -1;
	fin = ft_num2char(param, c);
	return (fin);
}

char	*ft_num2charh(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	int64_t	c;
	char	*fin;

	if (minus == 1)
	{
		c = (unsigned short int)num;
		c = c * -1;
	}
	else
		c = (unsigned short int)num;
	if (minus == 1)
		i--;
	param->length = -1;
	fin = ft_num2char(param, c);
	return (fin);
}

char	*ft_num2charl(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	int64_t	c;
	char	*fin;

	if (minus == 1)
		c = (unsigned long int)num * -1;
	else
		c = (unsigned long int)num;
	if ((minus == 1) && (c > 0))
		i--;
	if (c < 0)
	{
		num = c * -1;
		if (minus == 0)
		{
			minus = 1;
			i++;
		}
	}
	else
	{
		num = c;
		minus = 0;
	}
	fin = ft_num2charwr(param, num, minus, i);
	return (fin);
}

char	*ft_num2charll(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	int64_t	c;
	char	*fin;

	if (minus == 1)
		c = (unsigned long long int)num * -1;
	else
		c = (unsigned long long int)num;
	if ((minus == 1) && (c > 0))
		i--;
	if (c < 0)
	{
		num = c * -1;
		if (minus == 0)
		{
			minus = 1;
			i++;
		}
	}
	else
	{
		num = c;
		minus = 0;
	}
	fin = ft_num2charwr(param, num, minus, i);
	return (fin);
}
