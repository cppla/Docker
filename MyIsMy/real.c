//
// Created by cpp.la on 2022/2/10.
//

#include "stdio.h"
#include "stdlib.h"
#include "unistd.h"

#define SLEEP_TIME 60*60*12

int main()
{
    long int reduceFreeRam = 0;
    unsigned char * eatMemory = NULL;
    while(1)
    {
        printf("\e[1;1H\e[2J");

        FILE * fd;
        char buff[2048];
        char name[2048];
        long int  mem;
        fd = fopen("/proc/meminfo","r");
        fgets (buff, sizeof(buff), fd);
        printf("%s\n", buff);
        fgets (buff, sizeof(buff), fd);
        printf("%s\n", buff);
        fgets(buff, sizeof(buff), fd);
        sscanf(buff, "%s %ld", name, &mem);
        printf("%s\n%s\n%ld MB\n",buff, name, mem/1024);
        fclose(fd);

        reduceFreeRam = mem*1024 * 0.85;
        printf("需要吃掉的内存: %.ld MB\n", reduceFreeRam/1024/1024);

        eatMemory = (unsigned char *)malloc(reduceFreeRam);
        printf("pac man:-----------申请%ldMB内存------------\n", reduceFreeRam/1024/1024);
        printf("pac man:-----------填充%ldMB内存------------\n", reduceFreeRam/1024/1024);
        for (long int i = 0; i < reduceFreeRam; i++)
        {
            eatMemory[i] = i * rand();
        }
        printf("pac man:-----------填充%ldMB完毕------------\n", reduceFreeRam/1024/1024);
        free(eatMemory);
        printf("pac man:-----------释放%ldMB完毕------------\n", reduceFreeRam/1024/1024);
        printf("\n\n");


        int rand_sleep_time = rand() % SLEEP_TIME + 5;
        printf("MyIsMy Next Start: %ds...\n", rand_sleep_time);
        sleep(rand_sleep_time);
    }
    return 0;
}
