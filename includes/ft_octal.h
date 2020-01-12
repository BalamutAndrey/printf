/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_octal.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/07 20:19:36 by eboris            #+#    #+#             */
/*   Updated: 2019/12/07 21:11:15 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OCTAL_H
# define FT_OCTAL_H

# include <stdint.h>
# include <stdarg.h>
# include "ft_mainlist.h"
# include "ft_itoa.h"
# include "ft_putstr.h"
# include "ft_num2char.h"
# include "ft_intwidth.h"

int8_t	ft_octal(t_mainlist *param, va_list ap);
int8_t	ft_oct(t_mainlist *param, va_list ap);
int8_t	ft_oct_l(t_mainlist *param, va_list ap);
int8_t	ft_oct_ll(t_mainlist *param, va_list ap);
char	*ft_oct_octothorpe(char *temp);

#endif
