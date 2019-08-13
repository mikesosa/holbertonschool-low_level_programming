#include "holberton.h"
/**
 * create_file - Creates a file and inserts text into it
 * @filename: the name of the file passed as argument
 * @text_content: text to write into the file
 * Return: @1 if success and @-1 if fails
 */
int create_file(const char *filename, char *text_content)
{
	int w, file, cnt = 0;

	if (!filename)
		return (0);
	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (file == -1)
	{
		close(file);
		return (0);
	}
	while (text_content[cnt])
		cnt++;
	w = write(file, text_content, cnt);/*printf not allowed*/
	if (w == -1)
	{
		close(file);
		return (0);
	}
	close(file);
	return (1);
}
