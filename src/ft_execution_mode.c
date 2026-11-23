#include "../inc/minishell.h"

void	ft_execution_mode(int argc, char **argv, char **env)
{
	printf("%d %s %s", argc, argv[0], env[0]);
}
