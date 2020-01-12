/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ld_arr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:26:34 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 16:25:28 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LD_ARR_H
# define FT_LD_ARR_H

# include <stdarg.h>
# include <string.h>
# include <stdint.h>
# include <stdlib.h>

int8_t	ft_ldouble_create_arr(char **floor);
int8_t	ft_ldouble_reset_arr(char *floor);
int8_t	ft_ldouble_create_arr_5(char **ceiling);
int8_t	ft_ldouble_reset_arr_5(char *ceiling);

#endif
