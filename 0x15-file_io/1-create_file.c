#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fileDesc, writeBytes, len = 0;
	const int READWRITE_PERMI = 0600;

	if (!filename)
		return (-1);

	fileDesc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, READWRITE_PERMI);
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
