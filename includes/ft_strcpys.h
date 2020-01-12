/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpys.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/30 13:40:21 by eboris            #+#    #+#             */
/*   Updated: 2019/11/10 16:25:37 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRCPYS_H
# define FT_STRCPYS_H

# include <stdlib.h>
# include <string.h>
# include <wchar.h>
# include "ft_strs.h"

char	*ft_strcpy(char *dst, char *src);
char	*ft_strmbncpy(char *src, int i);
char	*ft_strmancpy(char *src, int i);
wchar_t	*ft_wstrcpy(wchar_t *dst, wchar_t *src);

#endif
