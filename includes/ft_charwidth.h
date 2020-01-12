/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_charwidth.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/17 15:27:13 by eboris            #+#    #+#             */
/*   Updated: 2019/11/17 15:45:29 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_CHARWIDTH_H
# define FT_CHARWIDTH_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_strs.h"

char	*ft_charwidth(char *str, t_mainlist *param);
char	*ft_charwidth2(char *str, t_mainlist *param, char c);
wchar_t	*ft_wcharwidth(wchar_t *str, t_mainlist *param);
wchar_t	*ft_wcharwidth2(wchar_t *str, t_mainlist *param, wchar_t c);

#endif
