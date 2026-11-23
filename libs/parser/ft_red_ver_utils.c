#include "ft_parser.h"

bool	ft_is_redir_node(t_dll *node)
{
	t_token	*token;

	token = (t_token *)node->content;
	if (token->type == TOKEN_REDIRECTION_IN)
		return (true);
	if (token->type == TOKEN_REDIRECTION_OUT)
		return (true);
	if (token->type == TOKEN_REDIRECTION_APPEND)
		return (true);
	if (token->type == TOKEN_HEREDOC)
		return (true);
	return (false);
}
