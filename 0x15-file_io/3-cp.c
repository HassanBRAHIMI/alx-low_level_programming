// /**
//  * main - entry point
//  * @ac: arguments count
//  * @av: arguments vector
//  * 
//  * Return: 97/98/99/100 in error 
// */
// #include "main.h"
// int main(int ac, char **av)
// {
//     char *file_from;
//     char *file_to;
//     char buff[1024];
//     int file_to_fd, readed_f_filefrom, file_from_fd, written, to, from;

//     if (ac != 3)
//     {
//         dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
//         exit (97);
//     }
//     file_from = av[1];
//     file_to = av[2];
//     file_to_fd = open(file_to, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
//     if (file_to_fd == -1)
//     {
//         dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to file", file_to);
//         exit(99);
//     }
//     file_from_fd = open(file_from, O_RDONLY);
//     if (file_from_fd == -1)
//     {
//         dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", file_from);
//         exit(98); 
//     }
//     readed_f_filefrom = 1024;
//     while(readed_f_filefrom == 1024)
//     {
//         readed_f_filefrom = read(file_from_fd, buff, 1024);
//         if (readed_f_filefrom == -1)
//         {
//             dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", file_from);
//             exit(98);
//         }
//         written = write(file_to_fd, buff, readed_f_filefrom);
//         if (written == -1)
//         {
//             dprintf(STDERR_FILENO,"%s %s\n", "Error: Can't write to", file_to);
//             exit(99);
//         }
//     }
//         to = close(file_to_fd);
//         from = close(file_from_fd);
// }
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * check97 - checks for the correct number of arguments
 * @argc: number of arguments
 *
 * Return: void
 */
void check97(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check98 - checks that file_from exists and can be read
 * @check: checks if true of false
 * @file: file_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}
}

/**
 * check99 - checks that file_to was created and/or can be written to
 * @check: checks if true of false
 * @file: file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 *
 * Return: void
 */
void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}
}

/**
 * check100 - checks that file descriptors were closed properly
 * @check: checks if true or false
 * @fd: file descriptor
 *
 * Return: void
 */
void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - opies the content of a file to another file.
 * @argc: number of arguments passed
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, close_to, close_from;
	ssize_t lenr, lenw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fd_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fd_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fd_to, argv[2], fd_from, -1);
	lenr = 1024;
	while (lenr == 1024)
	{
		lenr = read(fd_from, buffer, 1024);
		check98(lenr, argv[1], fd_from, fd_to);
		lenw = write(fd_to, buffer, lenr);
		if (lenw != lenr)
			lenw = -1;
		check99(lenw, argv[2], fd_from, fd_to);
	}
	close_to = close(fd_to);
	close_from = close(fd_from);
	check100(close_to, fd_to);
	check100(close_from, fd_from);
	return (0);
}