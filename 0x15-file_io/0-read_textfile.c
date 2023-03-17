<<<<<<< HEAD
#include "main.h"
=======
#include "holberton.h"
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
<<<<<<< HEAD

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
=======
#include <stdio.h>

/**
 * read_textfile - reads a txt file and prints it to standard output .
 * @filename: name of the txt file to read .
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
<<<<<<< HEAD
	ssize_t lenr, lenw;
=======
	ssize_t r, w;
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
	char *buffer;

	if (filename == NULL)
		return (0);
<<<<<<< HEAD
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
=======
	fd = open(filename, O_RDWR);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
<<<<<<< HEAD
	lenr = read(fd, buffer, letters);
	close(fd);
	if (lenr == -1)
=======
	r = read(fd, buffer, letters);
	close(fd);
	if (r == -1)
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
	{
		free(buffer);
		return (0);
	}
<<<<<<< HEAD
	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
=======
	w = write(STDOUT_FILENO, buffer, r);
	free(buffer);
	if (r != w)
		return (0);
	return (w);
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
}
