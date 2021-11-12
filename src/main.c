/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:59:17 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/11/12 11:50:06 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sh.h>

/* shell global var */
t_sh	g_sh;

/* main */
int	main(void)
{
	char	*line;

	/* initialise shell */
	init_shell();

	/* initialise terminal */
	init_prompt();

	/* minishell loop */
	while (1)
	{
		// prompt_refresh_screen();
		line = prompt_read_input();
		// prompt_process_input();

		// TESTS
		printf("line: %s\n", line);
	}

	/* shutdown and cleanup */
	// TODO

	return (EXIT_SUCCESS);
}
