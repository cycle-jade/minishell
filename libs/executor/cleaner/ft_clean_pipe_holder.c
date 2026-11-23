#include "../ft_executor.h"

static void	pipe_cmd_cleaner(t_dll *node)
{
	t_piped_cmd	*piped_cmd;

	piped_cmd = (t_piped_cmd *)node->content;
	if (piped_cmd->args)
		ft_free_char_array(piped_cmd->args);
	if (piped_cmd->cmd)
		free(piped_cmd->cmd);
	free(node->content);
}

void	ft_clean_pipe_holder(t_minishell *minishell)
{
	t_piph	*pipe_holder;

	pipe_holder = minishell->pipe_holder;
	if (!pipe_holder)
		return ;
	t_dll_clear(pipe_holder->pipes_cmd, &pipe_cmd_cleaner);
	free(pipe_holder);
	minishell->pipe_holder = NULL;
}
