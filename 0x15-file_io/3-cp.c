/**
 * main - entry point
 * @ac: arguments count
 * @av: arguments vector
 * 
 * Return: 97/98/99/100 in error 
*/
#include "main.h"
int main(int ac, char **av)
{
    char *file_from;
    char *file_to;
    char buff[1024];
    int file_to_fd, readed_f_filefrom, file_from_fd, written, to, from;

    if (ac != 3)
    {
        dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
        exit (97);
    }
    file_from = av[1];
    file_to = av[2];
    file_to_fd = open(file_to, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
    if (file_to_fd == -1)
    {
        dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't write to file", file_to);
        exit(99);
    }
    file_from_fd = open(file_from, O_RDONLY);
    if (file_from_fd == -1)
    {
        dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", file_from);
        exit(98); 
    }
    readed_f_filefrom = 1024;
    while(readed_f_filefrom == 1024)
    {
        readed_f_filefrom = read(file_from_fd, buff, 1024);
        if (readed_f_filefrom == -1)
        {
            dprintf(STDERR_FILENO, "%s %s\n", "Error: Can't read from file", file_from);
            exit(98);
        }
        written = write(file_to_fd, buff, readed_f_filefrom);
        if (written == -1)
        {
            dprintf(STDERR_FILENO,"%s %s\n", "Error: Can't write to", file_to);
            exit(99);
        }
    }
        to = close(file_to_fd);
        from = close(file_from_fd);
        
}
