#include "shell.h"
/**
 * built_in - our code handles the built-in commands
 * @tokz_array: our code fucn to tokenize command/arguments
 * Return: 1 walways on succes, else 0
 */
int built_in(char **tokz_array)
{
if (strcmp(tokz_array[0], "setenvironment") == 0)
{
return (set_environment(tokz_array));
}
else if (strcmp(tokz_array[0], "unsetenvironment") == 0)
{
return (unset_environment(tokz_array));
}
else if (strcmp(tokz_array[0], "environment") == 0)
{
return (suenv());
}
return (0);
}
