#include "holberton.h"
/**
 * copy_files - functian that copies the content to other file
 * @filefrom: sourcefile
 * @fileto: dest file:
 * Return: 98 99 100 if fails @1 if works
 */
int copy_files(char *filefrom, char *fileto)
{
	int from, to, r, w, c;
	char buf[1024] = {0};

	from = open(filefrom, O_RDONLY);/*OPENING FIRST FILE*/
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
		exit(98);
	}
	to = open(fileto, O_CREAT | O_WRONLY | O_TRUNC, 0664);/*OPENING SECOND FILE*/
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", fileto);
		exit(99);
	}
	do {
		r = read(from, buf, 1024);
		if (r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filefrom);
			exit(98);
		}
		if (r)
		{
			w = write(to, buf, r);/*WRITING TO FILE TO*/
			if (w == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", fileto);
				exit(99);
			}
		}
	} while (r);
	c = close(from);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	c = close(to);
	if (c == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", to);
		exit(100);
	}
	return (1);
}
/**
 * main -  main fucntion
 * @ac: Numer of arguments passed
 * @av: arguments passed
 * Return: 0 if ok
 */
int main(int ac, char **av)
{
	int res;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename text\n", av[0]);
		exit(97);
	}
	res = copy_files(av[1], av[2]);
	printf("-> %i)\n", res);
	return (0);
}
