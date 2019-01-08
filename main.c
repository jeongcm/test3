#include <stdio.h>
#include <fcntl.h>
#include <zconf.h>
#include <string.h>
#define FAULT_FLAG -1
int main() {
    printf("Hello, World!\n");
    char *buf = "hello clion\n";
    int fd;
    if (FAULT_FLAG!=(fd =open("/home/jcm/test.txt",O_RDWR|O_TRUNC|O_CREAT,0644))) {
        printf("fd : %d\n",fd);
        int j = write(fd, buf,strlen(buf));
        close(fd);
        if (j < 0)
        {
            printf("write error\n");
        }
    }
    else
    {
        printf("fd : %d\n",fd);

        printf("file open error");
        return 0;
    }

}