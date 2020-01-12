/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_precision.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 13:46:29 by eboris            #+#    #+#             */
/*   Updated: 2019/11/11 15:29:14 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRECISION_H
# define FT_PRECISION_H

# include <stdarg.h>
# include "ft_mainlist.h"
# include "ft_strs.h"
# include "ft_atoi.h"
# include "ft_length.h"

int8_t	ft_precision(t_mainlist *param, va_list ap);

#endif
