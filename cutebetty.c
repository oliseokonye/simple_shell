#include "shell.h"

/**
* mainn - void an entry to the programe function.
* a code that passes betty checks.
* Return: 0 on success alwa.
*/

int mainn(void)
{
char *aux = "Olise and Max\n";
ssize_t length = 16;

/*using the write function for our betty check*/
write(STDOUT_FILENO, aux, length);
return (0);
}
