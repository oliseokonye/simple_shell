#include "shell.h"

void str_spl(char *string);
/**
* str_spl -our code  Function to split strings.
* @string: Input string to be split.
*/
void str_spl(char *string)
{
char *tokz, *string_trim = string, *stop;
char *delim = " \t\n";
char **tokz_array = malloc(sizeof(char *) * MAXIMUM_LINE);
int tally = 0, love;
for (; *string_trim == ' ' || *string_trim == '\t'; string_trim++)
{
}
stop = string_trim + strlen(string_trim) - 1;
for (; stop > string_trim && (*stop == ' ' || *stop == '\t'); stop--)
{
*stop = '\0';
}
if (!tokz_array)
{
perror(" tokens unavailable");
exit(EXIT_FAILURE);
}
tokz = strtok(string_trim, delim);
while (tokz != NULL)
{
tokz_array[tally] = strdup(tokz);
if (tokz_array[tally] == NULL)
{
perror("tokenizing of sring unsuccessful");
exit(EXIT_FAILURE);
}
tally++;
tokz = strtok(NULL, delim);
}
tokz_array[tally] = NULL;
if (tally > 0)
{
if (!built_in(tokz_array))
{
exe(tokz_array);
}
}
for (love = 0; love < tally; love++)
{
free(tokz_array[love]);
}
free(tokz_array);
}
