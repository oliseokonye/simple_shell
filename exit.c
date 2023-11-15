#include "shell.h"
char *strchar(char *dm, char gen);
char *strconca(char *destination, char *source, int x);
char *strcopy(char *destination, char *source, int x);
/**
 ** strcopy - our code that copies a string
 *@destination: the destination of string to be copied
 *@source:our code for the source string
 *@x:our code for the amount of chars copied
 *Return: retunrs 0 alwyas on suceess
 */
char *strcopy(char *destination, char *source, int x)
{
int a;
int b;
char *stem = destination;
a = 0;
while (source[a] != '\0' && a < x - 1)
{
destination[a] = source[a];
a++;
}
if (a < x)
{
b = a;
while (b < x)
{
destination[b] = '\0';
b++;
}
}
return (stem);
}

/**
 **strconca -our code to  concatenates two strings
 *@destination:our code for the first string
 *@source:code for second string
 *@x:bytes to be maximum
 *Return: always 0 on success
 */
char *strconca(char *destination, char *source, int x)
{
int a;
int b;
char *stem = destination;
a = 0;
b = 0;
while (destination[a] != '\0')
a++;
while (source[b] != '\0' && b < x)
{
destination[a] = source[b];
a++;
b++;
}
if (b < x)
destination[a] = '\0';
return (stem);
}

/**
 **strchar -our code to  locates a char/a string
 *@dm: our code for string parsed
 *@gen:char to find
 *Return: (dm) pointer to memory dm
 */
char *strchar(char *dm, char gen)
{
do {
if (*dm == gen)
return (dm);
} while (*dm++ != '\0');
return (NULL);
}
