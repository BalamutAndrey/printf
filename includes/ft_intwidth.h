/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intwidth.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 12:25:33 by eboris            #+#    #+#             */
/*   Updated: 2019/11/21 18:46:58 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_INTWIDTH_H
# define FT_INTWIDTH_H

# include <stdarg.h>
# include "ft_mainlist.h"
# include "ft_width.h"
# include "ft_strcpys.h"
# include "ft_strdups.h"
# include "ft_num2char.h"

char	*ft_integerwidth(t_mainlist *param, char *str);
char	*ft_integerwidthzero(char *str, int width, int len, char znak);
char	*ft_integerwidthspace(t_mainlist *param, char *str, int width, int len);

#endif
