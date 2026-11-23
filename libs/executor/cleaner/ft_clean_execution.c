#include "../ft_executor.h"

void	ft_free_child_arrays(char **args, char **envs, char *cmd_path)
{
	if (envs)
		ft_free_char_array(envs);
	if (args)
		ft_free_char_array(args);
	if (cmd_path)
		free(cmd_path);
}
