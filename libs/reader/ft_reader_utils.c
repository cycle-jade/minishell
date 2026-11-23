#include "ft_reader.h"

char	*set_prompt(char *current_prompt, char *new_input)
{
	char	*new_prompt;

	if (!new_input)
		return (NULL);
	new_prompt = ft_strjoin(current_prompt, new_input);
	free(current_prompt);
	free(new_input);
	return (new_prompt);
}

void	handle_eof(char *prompt, char *new_input)
{
	if (new_input)
		free(new_input);
	if (prompt)
		free(prompt);
}
