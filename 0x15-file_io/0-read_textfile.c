#include "holberton.h"
/**
 * read_textfile - funtion that opens/reads/prints N bytes
 * @filename: the name of the file passed as argument
 * @letters: num of letter to print. Also size of the array;
 * Return: The ammount of letter he read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int w, file, result;
	char *buf;

	buf = malloc(sizeof(char) * letters + 1);
	if (!buf || !filename)
		return (0);
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	result = read(file, buf, letters);
	if (result == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	buf[letters + 1] = '\0';/*Null char at the end*/
	close(file);
	w = write(STDOUT_FILENO, buf, letters + 1);/*printf not allowed*/
	if (w == -1)
	{
		close(file);
		free(buf);
		return (0);
	}
	free(buf);
	return (result);
}
