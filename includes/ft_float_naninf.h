/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_naninf.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 18:26:01 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:33:08 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_NANINF_H
# define FT_FLOAT_NANINF_H

# include "ft_mainlist.h"
# include "ft_float_stuct.h"
# include "ft_strdups.h"
# include "ft_stringwidth.h"
# include "ft_putstr.h"

int8_t	ft_float_naninf(t_mainlist *param, int mantissa,
							int exponent, int sing);
int8_t	ft_ldouble_naninf(t_mainlist *param, int mantissa,
							int exponent, int sing);

#endif
