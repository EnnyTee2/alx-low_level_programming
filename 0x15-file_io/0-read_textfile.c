#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename
 * @letters: numbers of letters printed
 *
 * Return: numbers of letters printed. If it fails, returns 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t rd, wr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rd = read(fd, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	close(fd);

	free(buf);

	return (wr)





/* #include "main.h"

/**
 * read_textfile - function that reads specified file
 * @readFile: holds the read file 
 * @writtenFile: holds the written data
 * @buff: buffer for file storage
 * @fd:	file descriptor
 *
 * Return: number of letters printed
 
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
*/
