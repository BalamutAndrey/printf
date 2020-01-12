/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_integeru.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/23 18:18:45 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 13:47:19 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INTEGERU_H
# define FT_INTEGERU_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_putstr.h"
# include "ft_numu2char.h"
# include "ft_intwidth.h"

int8_t	ft_integeru(t_mainlist *param, va_list ap);
int8_t	ft_intu(t_mainlist *param, va_list ap);
int8_t	ft_intu_l(t_mainlist *param, va_list ap);
int8_t	ft_intu_ll(t_mainlist *param, va_list ap);

#endif
