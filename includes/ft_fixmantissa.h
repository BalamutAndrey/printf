/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fixmantissa.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/05 18:08:58 by eboris            #+#    #+#             */
/*   Updated: 2020/01/06 18:57:23 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FIXMANTISSA_H
# define FT_FIXMANTISSA_H

# include <stdarg.h>
# include <stdint.h>
# include "ft_strs.h"

char	*ft_fixmantissa(char *src);
char	*ft_fixmantissa_denorm(char *src);
char	*ft_ld_fixmantissa(char *src);

#endif
