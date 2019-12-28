/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rloraine <rloraine@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 15:31:18 by ksharlen          #+#    #+#             */
/*   Updated: 2019/09/28 15:11:14 by rloraine         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_ls.h"

void	flag_error(t_ubyte sym)
{
	ft_printf("%vft_ls: illegal option -- %c\n%s", 2, sym, EFLAGS);
	exit(EXIT_SUCCESS);
}

void	sys_errors(void)
{
	perror("ft_ls: ");
	exit(EXIT_FAILURE);
}

void	file_errors(const char *filename)
{
	FILE_ERROR(filename);
	perror("");
}
