<<<<<<< HEAD
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
=======
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
>>>>>>> 37a9752b32aa6973cbe91a9cfa012d0f1f850081
