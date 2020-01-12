/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numu2charjtzl.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:28:17 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 13:33:32 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_numu2charjtzl.h"

char	*ft_numu2charj(t_mainlist *param, uint64_t num, int64_t i)
{
	uintmax_t	c;
	char		*fin;

	c = (uintmax_t)num;
	fin = ft_numu2charwr(param, c, i);
	return (fin);
}

char	*ft_numu2charz(t_mainlist *param, uint64_t num, int64_t i)
{
	size_t	c;
	char	*fin;

	c = (size_t)num;
	fin = ft_numu2charwr(param, c, i);
	return (fin);
}

char	*ft_numu2chart(t_mainlist *param, uint64_t num, int64_t i)
{
	ptrdiff_t	c;
	char		*fin;

	c = (ptrdiff_t)num;
	fin = ft_numu2charwr(param, c, i);
	return (fin);
}
