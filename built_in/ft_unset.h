/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unset.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alee <alee@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 01:01:32 by alee              #+#    #+#             */
/*   Updated: 2022/05/25 15:23:33 by alee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_UNSET_H
# define FT_UNSET_H
# include "../env/env_list.h"

int	ft_unset(char **cmd, t_env_list *p_list);

#endif