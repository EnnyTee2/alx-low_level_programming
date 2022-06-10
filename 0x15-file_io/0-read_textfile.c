 #include "main.h"

/**
 * read_textfile - function that reads specified file
 * @filename: name of the file
 * @letters: number of letters to read
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t readFile, fd, writtenFile;
	char *buff;
	
	if (!filename)
		return (0);
	buff = malloc(sizeof(char) * letters);

	if (!buff)
		return (0);
	fd = open(filename, O_RDONLY);
	readFile = read(fd, buff, letters);
	writtenFile = write(STDOUT_FILENO, buff, readFile);

	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	if (readFile == -1)
	{
		free(buff);
		return (0);
	}

	close(fd);

	free(buff);
	return (writtenFile);
}
