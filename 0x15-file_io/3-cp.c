#include "main.h"

/**
 * copyFiles -  copies the content of a file to another file.
 * @file_from: source of the files
 * @file_to: destination to copy the files to
 *
 * Return: No return
 */

void copyFiles(const char *file_from, const char *file_to)
{
	int from, to, copied;
	char buffer[1024];

	from = open(file_from, O_RDONLY);
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((copied = read(from, buffer, 1024)) > 0)
	{
		if (write(to, buffer, copied) != copied)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (copied == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	if (close(to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to);
		exit(100);
	}
}

/**
 * main - entry point
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: ...
 */

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	copyFiles(argv[1], argv[2]);
	exit(0);
}
