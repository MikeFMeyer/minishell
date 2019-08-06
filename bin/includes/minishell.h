/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimeyer <mimeyer@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 09:25:23 by mimeyer           #+#    #+#             */
/*   Updated: 2019/08/06 09:31:40 by mimeyer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LS_H
# define FT_LS_H

# include "../libft/libft.h"
# include <readline/history.h>
# include <readline/readline.h>

int execute_args(char **cmds, char **env);
int check_sys(char **cmds, char **env);
int exec_cd(char *cmd);
void free_er(char **str);
void get_path(void);
int print_env(char **env);

#endif
