#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(int arrgc, char const *argv[])
{
        int fd = open("big_line_no_nl", O_CREAT | O_RDWR | O_APPEND);
        printf("%s_", get_next_line(fd));
        printf("%s_", get_next_line(fd));
        printf("%s_", get_next_line(fd));
        printf("%s_", get_next_line(fd));
        printf("%s_", get_next_line(fd));
        printf("%s_", get_next_line(fd));
        close(fd);
        int fd2 = open("big_line_with_nl", O_CREAT | O_RDWR | O_APPEND);
        printf("\n-------------------------------------\n");
        printf("%s_", get_next_line(fd2));
        printf("%s_", get_next_line(fd2));
        printf("%s_", get_next_line(fd2));
        printf("%s_", get_next_line(fd2));
        printf("%s_", get_next_line(fd2));
        close(fd2);
        return 0;
}
