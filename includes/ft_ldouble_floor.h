/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ldouble_floor.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 17:45:34 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 18:52:23 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LDOUBLE_FLOOR_H
# define FT_LDOUBLE_FLOOR_H

# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_strdups.h"
# include "ft_putstr.h"
# include "ft_float_stuct.h"
# include "ft_fixmantissa.h"
# include "ft_ld_arr.h"
# include "ft_ld_refix.h"
# include "ft_ldouble_ceiling.h"
# include "ft_ld_rounding.h"

int8_t	ft_ldouble_floor(t_mainlist *param, t_lngdouble *num);
char	*ft_ldouble_floor_calc(t_lngdouble *num);
int8_t	ft_ldouble_exponentiation(int64_t exp, char *floor1);
int8_t	ft_ldouble_plus(char *floor1, char *floor2);
char	*ft_ldouble_reverce(char *floor);

#endif
