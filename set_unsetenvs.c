#include "shell.h"


int set_environment(char **tokz);
int unset_environment(char **tokz);
/**
 * set_environment -our code Function to run setenv
 * @tokz: Tokensisation
 * Return: 1 on success always, else retun 0
 */
int set_environment(char **tokz)
{
if (tokz[1] == NULL || tokz[2] == NULL)
{
char *echo = "our set environment\n";
while (*echo)
{
write(STDERR_FILENO, echo, 1);
echo++;
}
return (1);
}
else
{
if (setenv(tokz[1], tokz[2], 1) != 0)
{
perror("setenv");
return (1);
}

}
return (1);
}

/**
 *unset_environment -  our code Function to  run unsetenv
 * @tokz: Tokenization
 * Return: 1 on success always,else return 0
 */
int unset_environment(char **tokz)
{
if (tokz[1] == NULL)
{
char *echo = "our unset environment\n";
while (*echo)
{
write(STDERR_FILENO, echo, 1);
echo++;
}
return (1);
}
else
{
if (unsetenv(tokz[1]) != 0)
{
perror("unset env");
return (1);
}
}
return (1);
}
