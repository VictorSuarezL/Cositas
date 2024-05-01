/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 16:47:10 by francfer          #+#    #+#             */
/*   Updated: 2024/05/01 16:34:46 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void patata()
{
	system("leaks a.out");
}

int	main(int args, char **argv, char **env)
{
    char	*input;
	char	*test;
	int i = -1;
	atexit(patata);
	if (args > 1 && argv)
		ft_error(NULL, "Invalid Numbers Of Arguments",);
	while(++i < 3)
	{
		input = get_input();
		printf("You entered: %s\n", input);
		free(input);
	}
    return 0;
}
