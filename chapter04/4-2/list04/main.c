#include <stdio.h>

int main()
{
    int x;
    int y = 0;

    printf("请输入打印次数："); scanf("%d",&x);

//     do {
//         printf("*\n\n");
//         y++;
//     } while (y < x);
    while (y < x) {
        printf("*\n\n");
        y++;
    }

    return 0;
}

//do 语句不管是什么条件，都会先执行一次语句，先执行后判断。
//while 语句先判断后执行。