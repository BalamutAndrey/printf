/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stringwidth.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/03 17:59:21 by eboris            #+#    #+#             */
/*   Updated: 2019/11/16 17:19:53 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRINGWIDTH_H
# define FT_STRINGWIDTH_H

# include <wchar.h>
# include "ft_mainlist.h"
# include "ft_strs.h"
# include "ft_atoi.h"

char	*ft_stringwidth(char *str, t_mainlist *param);
char	*ft_stringwidth2(char *str, t_mainlist *param, char c);
wchar_t	*ft_wstringwidth(wchar_t *str, t_mainlist *param);
wchar_t	*ft_wstringwidth2(wchar_t *str, t_mainlist *param, wchar_t c);

#endif
