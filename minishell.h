/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:21:56 by zzehra            #+#    #+#             */
/*   Updated: 2026/05/15 16:21:56 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <signal.h>
# include <readline/readline.h>
# include <readline/history.h>

# include "libft/libft.h"  
# include "parse/parse.h"
# include "builtin/builtin.h"
# include "execute/execute.h"

void	set_signals_interactive(void);
void	set_signals_heredoc(void);
extern volatile sig_atomic_t	g_signal;
#endif
