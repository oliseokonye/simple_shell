#include "shell.h"
/**
 * echo_cmd - our code Function that takes in input
 * @ln: the line ptr
 * @neto: the Size
 * Return: 0 always on success
 */
ssize_t echo_cmd(char **ln, size_t *neto)
{
int shell_pop = isatty(STDIN_FILENO);
char *pop;
ssize_t echo;
if (shell_pop)
{
pop = "ALXISFUN$ ";
write(1, pop, strlen(pop));
}
echo = getline(ln, neto, stdin);
if (!shell_pop && echo == -1)
{
return (-1);
}
if (shell_pop && echo == -1)
{
return (-1);
}
if (shell_pop && echo > 0 && (*ln)[echo - 1] == '\n')
{
(*ln)[echo - 1] = '\0';
echo--;
}
return (echo);
}
