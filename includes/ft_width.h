/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_width.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 12:31:28 by eboris            #+#    #+#             */
/*   Updated: 2019/11/11 15:29:30 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_WIDTH_H
# define FT_WIDTH_H

# include <stdarg.h>
# include "ft_mainlist.h"
# include "ft_precision.h"
# include "ft_strs.h"
# include "ft_atoi.h"

int8_t	ft_width(t_mainlist *param, va_list ap);

#endif
