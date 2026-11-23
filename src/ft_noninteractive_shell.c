#include "../inc/minishell.h"

void	ft_noninteractive_shell(t_minishell *minishell)
{
	t_dll	*token_list;

	minishell->interactive_mode = false;
	token_list = read_through_input(minishell->line);
	minishell->cmdt = ft_parser(token_list);
	ft_expander(minishell);
	if (minishell->cmdt)
		ft_executor(minishell);
	free_nodes(token_list);
	ft_clean_minishell(minishell);
}
