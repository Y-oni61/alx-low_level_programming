<<<<<<< HEAD
#include "main.h"

/**
 * create_file - create a file with read/write access for user
 * @filename: name of file to create
 * @text_content: string to write to file
=======
#include "holberton.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>

/**
 * _strlen - extracting the length of a string
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	return (length);
}

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: text to be written .
 *
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
<<<<<<< HEAD
	int fd, rstatus, i;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rstatus = write(fd, text_content, i);
		if (rstatus == -1)
			return (-1);
	}

=======
	int fd;
	ssize_t lenw = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);
	if (text_content)
		lenw = write(fd, text_content, _strlen(text_content));
	if (lenw == -1)
		return (-1);
>>>>>>> 6d9eddd34c46e5a934075522cc7dd069d28e9599
	close(fd);
	return (1);
}
