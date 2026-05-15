/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_token_list.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zzehra <zzehra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 16:21:45 by zzehra            #+#    #+#             */
/*   Updated: 2026/05/15 16:21:46 by zzehra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parse.h"

void	free_token_list(t_tokens **tokens)
{
	t_tokens	*tmp;

	while (*tokens)
	{
		tmp = (*tokens)->next;
		free((*tokens)->value);
		free(*tokens);
		*tokens = tmp;
	}
}
