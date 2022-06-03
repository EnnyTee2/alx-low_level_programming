 #include "main.h"

/**
 * read_textfile - function that reads specified file
 * @readFile: holds the read file 
 * @writtenFile: holds the written data
 * @buff: buffer for file storage
 * @fd:	file descriptor
 *
 * Return: number of letters printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{	
	ssize_t readFile; 
	ssize_t writtenFile;
	char *buff;
	int fd;
	
	if (!filename)
	{
		return (0);
	}
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		retrun (0);
	}
	
	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		return (0);
	}
	readFile = read(fd, buff, letters);
	if (readFile == -1)
	{
		return (0);
	}
	close(fd);
	writtenFile = write(STD_FILENO, buff, readFile);
	free(buff);
}
