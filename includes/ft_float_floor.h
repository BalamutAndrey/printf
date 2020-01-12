/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_floor.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 13:57:30 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:23:31 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_FLOOR_H
# define FT_FLOAT_FLOOR_H

# include <stdlib.h>
# include <stdio.h>
# include <stdint.h>
# include <string.h>
# include "ft_mainlist.h"
# include "ft_float_stuct.h"
# include "ft_strs.h"
# include "ft_putstr.h"
# include "ft_intwidth.h"
# include "ft_strdups.h"
# include "ft_fixmantissa.h"
# include "ft_float_refix.h"
# include "ft_float_arr.h"
# include "ft_float_ceiling.h"
# include "ft_float_rounding.h"

int8_t	ft_float_floor(t_mainlist *param, t_double *num);
char	*ft_float_floor_calc(t_double *num);
int8_t	ft_float_exponentiation(int64_t exp, char *floor1);
int8_t	ft_float_plus(char *floor1, char *floor2);
char	*ft_float_reverce(char *floor);

#endif
