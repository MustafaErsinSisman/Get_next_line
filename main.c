#include <stdio.h>
#include <fcntl.h>
#include "get_next_line.h"

int main(int argc, char const *argv[])
{
        int fd = open("deneme.txt", O_CREAT | O_RDWR, 644);
        if (fd < 0)
        {
                printf("no dosya");
                return 0;
        }
        printf("%s", get_next_line(fd));
        printf("%s", get_next_line(fd));
        printf("%s", get_next_line(fd));
        printf("%s", get_next_line(fd));
        printf("%s", get_next_line(fd));
        printf("%s", get_next_line(fd));
        printf("%s", get_next_line(fd));
        return 0;
}
