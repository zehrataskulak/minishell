/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:20:37 by zzehra            #+#    #+#             */
/*   Updated: 2026/05/15 16:20:38 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "builtin.h"

int	pwd_builtin(void)
{
	char	buff[4096];

	if (getcwd(buff, sizeof(buff)) == NULL)
	{
		print_error("getcwd() error!\n");
		return (1);
	}
	printf("%s\n", buff);
	return (0);
}
