/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num2charjtzl.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 14:56:13 by eboris            #+#    #+#             */
/*   Updated: 2019/11/21 19:55:45 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_num2charjtzl.h"

char	*ft_num2charj(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	intmax_t	c;
	char		*fin;

	if (minus == 1)
		c = (intmax_t)num * -1;
	else
		c = (intmax_t)num;
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

char	*ft_num2charz(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	size_t	c;
	char	*fin;

	if (minus == 1)
		c = (size_t)num * -1;
	else
		c = (size_t)num;
	if ((minus == 1) && (c > 0))
		i--;
	num = c;
	minus = 0;
	fin = ft_num2charwr(param, num, minus, i);
	return (fin);
}

char	*ft_num2chart(t_mainlist *param, int64_t num, int8_t minus, int64_t i)
{
	ptrdiff_t	c;
	char		*fin;

	if (minus == 1)
		c = (ptrdiff_t)num * -1;
	else
		c = (ptrdiff_t)num;
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
