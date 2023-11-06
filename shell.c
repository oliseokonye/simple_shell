#include "shell.h"

/**
 * main -Entry point to our shell project main function
 * @argc: argument count
 * @argv: argument value
 * Return: 0 Always on (sucess)
 */
int main(int argc, char **argv)
{
size_t size_len = 0;
ssize_t beta;
char *echo1 = NULL;
(void)argc;
(void)argv;
for (;;)
{
beta = echo_cmd(&echo1, &size_len);
if (beta == -1)
{
break;
}
if (echo1[0] == '#' || (echo1[0] == ' ' && echo1[1] == '#'))
{
continue;
}
str_spl(echo1);
}
free(echo1);
return (EXIT_SUCCESS);
}
