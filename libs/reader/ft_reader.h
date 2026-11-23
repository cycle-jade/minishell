#ifndef FT_READER_H
# define FT_READER_H
# include "../../inc/minishell.h"

char	*ft_reader(void);
char	*set_prompt(char *current_prompt, char *new_input);
void	handle_eof(char *prompt, char *new_input);

#endif
