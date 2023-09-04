#include "main.h"

/**
 * checkArgs - checks if the number of arguments is correct
 * @argc: number of arguments passed
 * Return: void
 */
void checkArgs(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * checkRead - checks if the file can be read
 * @file: file to check
 * @filename: name of the file
 * Return: void
 */
void checkRead(int file, char *filename)
{
	if (file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int fileFrom, fileTo, readBytes, writeBytes;
	char buf[1024];

	checkArgs(argc);
	fileFrom = open(argv[1], O_RDONLY);
	checkRead(fileFrom, argv[1]);
	fileTo = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fileTo == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((readBytes = read(fileFrom, buf, 1024)) > 0)
	{
		writeBytes = write(fileTo, buf, readBytes);
		if (writeBytes == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (readBytes == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fileFrom) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileFrom);
		exit(100);
	}
	if (close(fileTo) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fileTo);
		exit(100);
	}
	return (0);
}
