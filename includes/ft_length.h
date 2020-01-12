/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_length.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 14:52:01 by eboris            #+#    #+#             */
/*   Updated: 2019/11/11 16:02:09 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LENGTH_H
# define FT_LENGTH_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_type.h"

int8_t	ft_length(t_mainlist *param, va_list ap);
int8_t	ft_length2(t_mainlist *param, va_list ap, int8_t i);
int8_t	ft_length3(t_mainlist *param, va_list ap, int8_t i);

#endif
