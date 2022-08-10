#include "main.h"
/**
 * _getenv - retrieves env variable that matches input string
 * @input: input string
 * @environ: local environmental var
 * Return: string of env variable
 */
char *_getenv(char *input, char **environ)
{
	int i = 0;
	char *token, *right;

	while (environ[i])
	{
		token = _strtok(environ[i], "=");
		if (_strcmp(token, input) == 0)
		{
			right = _strtok(NULL, "=");
			return (right);
		}
		i++;
	}
	return (NULL);
}
