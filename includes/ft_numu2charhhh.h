/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numu2charhhh.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eboris <eboris@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/24 13:15:33 by eboris            #+#    #+#             */
/*   Updated: 2019/11/24 15:39:53 by eboris           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_NUMU2CHARHHH_H
# define FT_NUMU2CHARHHH_H

# include <string.h>
# include <stdint.h>
# include "ft_mainlist.h"
# include "ft_numu2char.h"
# include "ft_numu2charjtzl.h"

char	*ft_numu2charhhh(t_mainlist *param, uint64_t num, int64_t i);
char	*ft_numu2charhh(t_mainlist *param, uint64_t num);
char	*ft_numu2charh(t_mainlist *param, uint64_t num);
char	*ft_numu2charl(t_mainlist *param, uint64_t num, int64_t i);
char	*ft_numu2charll(t_mainlist *param, uint64_t num, int64_t i);

#endif
