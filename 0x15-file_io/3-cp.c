#include "holberton.h"
void argument_error97(int arguments)
{
	if (arguments != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}


void read_error98(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

void write_error99(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

void close_error100(int file)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file);
	exit(100);
}
int main(int argc, char **argv)
{
	int file = -1;
	int file2 = -1;
	int reading = -1;
	int writing = -1;
	int closing = -1;
	char s[1024] = {0};

	argument_error97(argc);
	file = open(argv[1], O_RDONLY);
	if (file == -1)
		read_error98(argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (file2 == -1)
		write_error99(argv[2]);
	do {
		reading = read(file, s, 1024);
		if (reading == -1)
			read_error98(argv[1]);
		if (reading)
		{
			writing = write(file2, s, reading);
			if (writing == -1)
				write_error99(argv[2]);
		}
	} while (reading);
	closing = close(file);
	if (closing == -1)
		close_error100(file);
	closing = close(file2);
	if (closing == -1)
		close_error100(file2);
	return (0);
}

