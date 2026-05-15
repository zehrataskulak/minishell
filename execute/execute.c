/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execute.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:21:08 by zzehra            #+#    #+#             */
/*   Updated: 2026/05/15 16:21:09 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "execute.h"

int	execute(t_cmds **cmd, t_envp **env)
{
	if (!cmd || !*cmd)
		return (0);
	if (prepare_heredocs(cmd, env) < 0)
		return (130);
	if ((*cmd)->next)
		return (execute_non_single(cmd, env));
	return (execute_single(cmd, env));
}
