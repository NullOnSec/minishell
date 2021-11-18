/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:01:22 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/11/17 12:49:14 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh.h>

int	parse(t_lexer *lex, t_ast *ast)
{
	g_sh.tok = lex->tok_lst;
	*ast = ast_build();

	if (g_sh.tok != NULL && g_sh.tok->type != 0)
	{
		ft_dprintf(STDERR_FILENO, "Error: syntax error near: %s\n", g_sh.tok->data);
		return (1);
	}
	return (0);
}
