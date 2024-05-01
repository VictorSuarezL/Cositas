/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: francfer <francfer@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:09:08 by francfer          #+#    #+#             */
/*   Updated: 2024/05/01 16:42:34 by francfer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>

//utils.c
int		ft_strlen(char *str);
char	*ft_strchr(const char *str, int c);
char	*ft_strtrim(char *s1, char const *set);
char	*ft_strncpy(char *dest, const char *src, size_t n);
void	ft_putstr_fd(char *str, int fd);

//utils1.c
void	ft_putendl_fd(char *str, int fd);

//get_input.c
char	*get_input(void);


#endif