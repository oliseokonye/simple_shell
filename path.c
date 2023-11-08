#include "shell.h"
/**
 * pathfinder - our code to Search for command full path
 * @locate: the command variable name
 *
 * Return: Path tothe command, will be NULL if path is not found
 */
char *pathfinder(const char *locate)
{
char path_find[1024];
const char *loc_ditry = getenv("PATH");
char *path1 = strdup(loc_ditry);
char *path2 = strdup(path1);
char *directory;
if (!path1)
{
perror("unspecified");
return (NULL);
}
for (directory = strtok(path2, ":"); directory != NULL;
		directory = strtok(NULL, ":"))
{
snprintf(path_find, sizeof(path_find), "%s/%s", directory, locate);
if (access(path_find, X_OK) == 0)
{
free(path1);
free(path2);
return (strdup(path_find));
}
}
free(path1);
free(path2);
return (NULL);
}
