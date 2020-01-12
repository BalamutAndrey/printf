/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_type.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/31 15:13:50 by eboris            #+#    #+#             */
/*   Updated: 2020/01/07 17:50:51 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TYPE_H
# define FT_TYPE_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_remparam.h"
# include "ft_typefun.h"

int8_t	ft_type(t_mainlist *param, va_list ap);
int8_t	ft_type2(t_mainlist *param, va_list ap, int8_t i, char *str);
int8_t	ft_type3(t_mainlist *param, va_list ap, int8_t i, char *str);

#endif
