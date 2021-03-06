#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the name of the file
* @letters: the number of letters it should read and print
* Return: actual number of letters it could read and print, 0 on failure
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buf;

buf = malloc(sizeof(char) * letters);
if (!buf || !filename)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
r = read(fd, buf, letters);
close(fd);
if (r == -1)
return (0);

w = write(STDOUT_FILENO, buf, r);

free(buf);

if (w == -1)
return (0);


return (r);
}

