#include "shell.h"

/**
 * exe -our code for executing the command
 * @tokz: Tokens
 */
void exe(char **tokz);
void exe(char **tokz)
{
char error[61];
pid_t child_pid;
int arc;
char *locate, *root;
char *vvip[] = {"max=jessi", NULL};
child_pid = fork();
if (child_pid == -1)
{
perror("Err! cmd fail");
exit(EXIT_FAILURE);
}
else if (child_pid == 0)
{
locate = tokz[0];
while (locate != NULL)
{
if (strchr(locate, '/'))
{
if (execve(locate, tokz, vvip) == -1)
{
write(STDERR_FILENO, "Err! cmd fail\n", 44);
exit(EXIT_FAILURE);
}
}
else
{
root = pathfinder(locate);
if (locate == NULL)
{
snprintf(error, sizeof(error), " cmd error: %s\n", locate);
write(STDERR_FILENO, error, strlen(error));
exit(EXIT_FAILURE);
}
if (execve(root, tokz, vvip) == -1)
{
write(STDERR_FILENO, "Cmd error\n", 25);
exit(EXIT_FAILURE);
}
}
}
}
else
{
waitpid(child_pid, &arc, 0);
}
}
