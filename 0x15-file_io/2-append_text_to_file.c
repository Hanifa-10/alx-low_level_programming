#include "main.h"

/**
* append_text_to_file - appends text at the end of a file
* @filename: the name of the file
* @text_content: NULL terminated string to add at the end of the file
* Return: 1 on Success and -1 on failure and if filename and text_content is NULL
*/

int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, len = 0;
if (!filename)
return (-1);
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
return (-1);
if (!text_content)
return (-1);

while (text_content && text_content[len]
len++;

w = write(fd, text_content, len);
close(fd);

if (w == -1)
return (-1);

return (1);
}

