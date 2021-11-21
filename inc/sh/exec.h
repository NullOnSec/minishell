/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/21 16:22:17 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/11/21 19:45:54 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXEC_H
# define EXEC_H

/*** INCLUDES ***/

# include <sh/ast.h>
# include <libft/ft_bool.h>

/*** DATA ***/

typedef struct s_cmd {
	int		argc;
	char	**argv;
	t_bool	async;
}	t_cmd;

/*** PROTOTYPES ***/

/* exec.c */
void	exec_ast(t_ast *ast);

/* cmd_utils.c */
void	cmd_del(t_cmd *cmd);

#endif
