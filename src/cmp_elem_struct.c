/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmp_elem_struct.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloraine <rloraine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 09:40:57 by ksharlen          #+#    #+#             */
/*   Updated: 2019/09/28 15:11:17 by rloraine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

int		cmp_atime(t_filename *one, t_filename *two)
{
	return (one->buf->st_atimespec.tv_sec - two->buf->st_atimespec.tv_sec);
}

int		cmp_mtime(t_filename *one, t_filename *two)
{
	return (one->buf->st_mtimespec.tv_sec - two->buf->st_mtimespec.tv_sec);
}

int		cmp_name(t_filename *one, t_filename *two)
{
	if (ft_strcmp(one->filename, two->filename) < 0)
		return (TRUE);
	else
		return (FALSE);
}
