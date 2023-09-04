#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fileDesc, writeBytes, len = 0;

	if (!filename)
		return (-1);

	fileDesc = open(filename, O_WRONLY | O_APPEND);
	if (fileDesc == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		writeBytes = write(fileDesc, text_content, len);
		if (writeBytes == -1)
			return (-1);
	}

	close(fileDesc);
	return (1);
}
