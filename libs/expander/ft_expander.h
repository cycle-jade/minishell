#ifndef FT_EXPANDER_H
# define FT_EXPANDER_H
# include "../../inc/minishell.h"

typedef struct minishell_obj	t_minishell;

void	ft_expander(t_minishell *minishell);
int		count_env(char *str);
char	*get_word(char *str);
char	**get_envs(char *str, t_dll *envs);
char	*ft_strjoin_char(char *str, char c);
char	*expanding(char *str, t_minishell *minishell);
char	*breakdown(char *str, t_minishell *minishell);

#endif