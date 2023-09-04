#include "main.h"
#include <elf.h>

/**
 * main - Entry Point
 * Return: 0
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr *header;
	int fd;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(EXIT_FAILURE);
	}

	header = malloc(sizeof(Elf64_Ehdr));
	if (!header)
	{
		dprintf(STDERR_FILENO, "Error: Can't allocate memory\n");
		exit(EXIT_FAILURE);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	if (read(fd, header, sizeof(Elf64_Ehdr)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Cannot read file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	return EXIT_SUCCESS;
}
