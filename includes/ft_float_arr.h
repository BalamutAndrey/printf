/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_float_arr.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 19:07:28 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 19:10:13 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FLOAT_ARR_H
# define FT_FLOAT_ARR_H

# include <stdarg.h>
# include <string.h>
# include <stdint.h>
# include <stdlib.h>

int8_t	ft_float_create_arr(char **floor);
int8_t	ft_float_reset_arr(char *floor);
int8_t	ft_float_create_arr_5(char **floor);
int8_t	ft_float_reset_arr_5(char *floor);

#endif
