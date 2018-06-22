#include <fcntl.h>
#include <errno.h>
#include <stdio.h>
#include <libft.h>

int main(int argc, char *argv[])
{
    int     fd;
    char    *line;
    int     check;

    if (argc != 2)
    {
        ft_putstr("Usage: ");
        ft_putstr(argv[0]);
        ft_putstr(" Filename\n");
        return (0);
    }
    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        perror(NULL);
        return (0);
    }
    while ((check = get_next_line(fd, &line)))
    {
        if (check < 0)
        {
            perror(NULL);
            close(fd);
            if (line)
                free(line);
            return (0);
        }
        ft_putendl(line);
        free(line);
    }
    close(fd);
}
