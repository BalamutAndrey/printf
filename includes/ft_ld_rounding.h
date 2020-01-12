/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ld_rounding.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 17:27:54 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 18:11:29 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LD_ROUNDING_H
# define FT_LD_ROUNDING_H

# include <stdint.h>
# include "ft_float_stuct.h"
# include "ft_mainlist.h"
# include "ft_strs.h"
# include "ft_intwidth.h"

char	*ft_ldouble_ceiling_rounding(t_mainlist *param,
									char **floor, char *ceiling);
int8_t	ft_ldouble_ceiling_round(int i, char *ceiling, int *n, char *fin);
char	*ft_ldouble_floor_ceiling(char *floor);
char	*ft_ldouble_floor_ceiling_sing(t_mainlist *param, t_lngdouble *num,
										char *floor);

#endif
