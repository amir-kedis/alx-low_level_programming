#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read
 * @letters: number of letters it should read and print
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	int fileDesc, readBytes, writeBytes;

	if (!filename)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (!buf)
		return (0);

	fileDesc = open(filename, O_RDONLY);
	if (fileDesc == -1)
	{
		free(buf);
		return (0);
	}

	readBytes = read(fileDesc, buf, letters);
	if (readBytes == -1)
	{
		free(buf);
		return (0);
	}

	writeBytes = write(STDOUT_FILENO, buf, readBytes);
	if (writeBytes == -1)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fileDesc);
	return (writeBytes);
}
