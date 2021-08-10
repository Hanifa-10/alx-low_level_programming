#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the name of the file
* @letters: the number of letters it should read and print
* Return: actual number of letters it could read and print, if the file
* cannot be opened or read, return 0, if filename is NULL return 0, if write
* fails or does not write the expected amount of byts, return 0
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
ssize_t r, w;
char *buf;

buf = malloc(sizeof(char) * letters);
if (!buf)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
r = read(fd, buf, letters);
if (r == -1)
return (0);

w = write(STDOUT_FILENO, buf, r);

if (w == -1)
return (0);

close(fd);
return (w);
}

