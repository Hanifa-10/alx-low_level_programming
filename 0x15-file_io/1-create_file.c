#include "main.h"
/**
* create_file - a function that creates a file
* @filename: the name of the file
* @text_content: NULL terminated string to write to the file
* Return: 1 on success , -1 on failure, -1 if filename or text_content is NULL
*/

int create_file(const char *file name, char *text_content)
{
int fd, we, len = 0;
if (!filename)
return (-1);
if (!text_content)
text_content = "";

fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);

while (text_content && text_content[len])
len++;

w = write(fd, text_content, len);
close(fd);

if (w == -1)
return (-1);

return (1);

}

