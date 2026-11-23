#include "../inc/minishell.h"

void	ft_set_shell_path(t_minishell *minishell)
{
	char	*shell_path;
	char	*shell_dir;
	t_dll	*pwd;

	pwd = ft_find_env("PWD", minishell->envs);
	shell_path = ft_strjoin(((t_env *)pwd->content)->value, "/minishell");
	minishell->shell_path = shell_path;
	shell_dir = ft_strjoin(((t_env *)pwd->content)->value, "/");
	minishell->shell_dir = shell_dir;
}
