/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpoveda- <me@izenynn.com>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:59:17 by dpoveda-          #+#    #+#             */
/*   Updated: 2021/11/12 11:19:41 by dpoveda-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <minishell.h>

int	main(void)
{
	char	*line;

	/* initialise terminal */
	init_terminal();

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
