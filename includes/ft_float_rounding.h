/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_rounding.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:20:15 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:33:37 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_ROUNDING_H
# define FT_FLOAT_ROUNDING_H

# include <stdint.h>
# include "ft_float_stuct.h"
# include "ft_mainlist.h"
# include "ft_strs.h"
# include "ft_intwidth.h"

char	*ft_float_ceiling_rounding(t_mainlist *param, char **floor,
									char *ceiling);
int8_t	ft_float_ceiling_round(int i, char *ceiling, int *n, char *fin);
char	*ft_float_floor_ceiling(char *floor);
char	*ft_float_floor_ceiling_sing(t_mainlist *param, t_double *num,
										char *floor);

#endif
