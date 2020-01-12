/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numu2charhhh.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:16:51 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 15:38:02 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_numu2charhhh.h"

char	*ft_numu2charhhh(t_mainlist *param, uint64_t num, int64_t i)
{
	char	*fin;

	fin = NULL;
	if (param->length == 2)
		fin = ft_numu2charhh(param, num);
	else if (param->length == 3)
		fin = ft_numu2charh(param, num);
	else if (param->length == 1)
		fin = ft_numu2charl(param, num, i);
	else if (param->length == 4)
		fin = ft_numu2charll(param, num, i);
	else if (param->length == 5)
		fin = ft_numu2charj(param, num, i);
	else if (param->length == 6)
		fin = ft_numu2charz(param, num, i);
	else if (param->length == 7)
		fin = ft_numu2chart(param, num, i);
	return (fin);
}

char	*ft_numu2charhh(t_mainlist *param, uint64_t num)
{
	unsigned char	c;
	char			*fin;

	c = (unsigned char)num;
	param->length = -1;
	fin = ft_numu2char(param, c);
	return (fin);
}

char	*ft_numu2charh(t_mainlist *param, uint64_t num)
{
	unsigned short int	c;
	char				*fin;

	c = (unsigned short int)num;
	param->length = -1;
	fin = ft_numu2char(param, c);
	return (fin);
}

char	*ft_numu2charl(t_mainlist *param, uint64_t num, int64_t i)
{
	unsigned long int	c;
	char				*fin;

	c = (unsigned long int)num;
	fin = ft_numu2charwr(param, c, i);
	return (fin);
}

char	*ft_numu2charll(t_mainlist *param, uint64_t num, int64_t i)
{
	unsigned long long int	c;
	char					*fin;

	c = (unsigned long long int)num;
	fin = ft_numu2charwr(param, c, i);
	return (fin);
}
