/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:01:22 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/11/19 17:35:29 by                  ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh.h>

int	parse(t_lexer *lex, t_ast *ast)
{
	t_tok	*tok;

	tok = lex->tok_lst;
	//*ast = ;
	(void)ast; // Despues me dices que me asegure de que compila antes de pushear :)
	if (tok != NULL && tok->type != 0)
	{
		printf("Error: syntax error near: %s\n", tok->data);
		return (1);
	}
	return (0);
}