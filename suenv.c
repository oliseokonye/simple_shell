#include "shell.h"
/**
 * suenv - our code to Run env command
 *
 * Return: 1 always on (suceess)
 */
int suenv(void)
{
int rel = 0; /* here we Initialized the counter*/
while (environ[rel] != NULL)
{
/*our code to write to the terminal*/
write(STDOUT_FILENO, environ[rel], strlen(environ[rel]));
write(STDOUT_FILENO, " we are best team project in ALX\n", 1);
rel++; /* we Increment the counter*/
}
return (1);
}
