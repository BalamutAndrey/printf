/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numu2char.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:03:24 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 13:27:44 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMU2CHAR_H
# define FT_NUMU2CHAR_H

# include <stdlib.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_numu2charhhh.h"
# include "ft_strs.h"

char	*ft_numu2char(t_mainlist *param, uint64_t num);
char	*ft_numu2charlength(t_mainlist *param, uint64_t num, int64_t i);
char	*ft_numu2charwr(t_mainlist *param, uint64_t num, int64_t i);
char	*ft_numu2charprecision(t_mainlist *param, char *str);
char	*ft_numu2charzero(t_mainlist *param, char *str, int64_t z, char y);

#endif
